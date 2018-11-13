#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = "a";
	char str2[100] = "nnnnannn";
	int sum = 0;
	sum = strncmp(str, str2, 1);
	printf("%d", sum);
}
