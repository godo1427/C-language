#include <stdio.h>
#include <string.h>
void print(char *, char *, char *);
void swap(char *a, char *b);

int main()
{
	char str1[20], str2[20], str3[20];
	int cmp;
	
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%s", str3);
	
	cmp = strcmp(str1, str2);
	
	if(cmp>0)
		swap(str1, str2);
	
	cmp = strcmp(str2, str3);
	
	if(cmp>0)
		swap(str2, str3);
		
	cmp = strcmp(str1, str3);
	
	if(cmp>0)
		swap(str1, str3);
	
	print(str1, str2, str3);	

	return 0;
}
void print(char *str1 , char *str2, char *str3)
{
	printf("%s, ", str1);
	printf("%s, ", str2);
	printf("%s", str3);
}

void swap(char *a, char *b)
{
	char tmp[20];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);
}
