#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char temp[32];
	char *ps, *pt;
	int len = 1;
	
	ps = (char *)calloc(1, 1);
	while(1)
	{
		printf("메모 입력: ");
		fgets(temp, sizeof(temp), stdin);
		temp[strlen(temp) - 1] = '\0';
		if(strcmp(temp, "end")==0) break;
		len += strlen(temp) + 1;
		pt = (char *)realloc(ps, len);
		if(pt == NULL)
		{
			printf("메모리 부족...\n");
			break;
		}
		ps = pt;
		strcat(ps, temp);
		strcat(ps, " ");
	}
	printf("%s\n", ps);
	
	free(ps);
	
	return 0;
	}

