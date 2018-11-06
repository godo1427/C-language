#include <stdio.h>

int main(void)
{
	int cnt = 0, max = 0;
	
	while(getchar()!= EOF)
	{
		cnt++;
		while(getchar()!='\n')
		{
			cnt++;
		}	
		if(cnt>max)
			max = cnt;
		cnt=0;
	}
	printf("가장 긴 단어의 길이: %d", max);
}
