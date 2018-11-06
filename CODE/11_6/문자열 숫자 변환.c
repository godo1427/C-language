#include <stdio.h>
#define SIZE 10
int main(void)
{
	int ary[SIZE]={0};
	int ch, i = 0, sum = 0;
	while(1)
	{	
		ch = getchar();
		
		if(ch!='\n')
		{
			ary[i] = ch-'0';
			i++;	
		}
		else
			break;
	}
	int Ary[10] = {1, 10, 100, 1000, 10000};
	int j;
	for(j=0;j<=i;j++)
	{
		sum += ary[j]*Ary[j];
	}

	printf("%d", sum);
	return 0;
}
