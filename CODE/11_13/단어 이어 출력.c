#include <stdio.h>
#include <string.h>

int main()
{
	char str[100], input[100];
	
	printf("�ܾ��Է�: ");
	scanf("%s", str);
	
	do{
		strcat(str, " ");
		printf("���ڿ�: %s\n", str);
		
		printf("�ܾ��Է�: "); 
		scanf("%s", input);
		strcat(str, input);
	}while(strcmp(input, "end"));
	
	
	return 0;
}
