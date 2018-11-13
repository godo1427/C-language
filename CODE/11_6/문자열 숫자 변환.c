#include <stdio.h>
#define SIZE 10
int main(void)
{
	int ary[SIZE];
	int ch, i = 0, sum = 0, weight = 1;
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
 i--;

	for(;i>=0;i--)
	{
		sum += ary[i] * weight;
		weight *= 10;
	}
	sum += 10;


	printf("%d", sum);
	return 0;
}
