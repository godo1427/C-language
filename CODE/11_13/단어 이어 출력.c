#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], input[100];
	
	printf("단어입력: ");
	scanf("%s", str);
	
	do{
		strcat(str, " ");
		printf("문자열: %s\n", str);
		
		printf("단어입력: "); 
		scanf("%s", input);
		strcat(str, input);
	}while(strcmp(input, "end"));
	
	
	return 0;
}
