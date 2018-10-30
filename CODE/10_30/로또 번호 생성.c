#include <stdio.h>
#define SIZE 6
void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[SIZE];
	
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	
	return 0;
}

void input_nums(int *lotto_nums)
{
	int i, j;
	for(i=0;i<SIZE;i++)
	{
		scanf("%d", lotto_nums+i);
		
		for(j=0;j<i;j++)
		{
			if(*(lotto_nums+i) == *(lotto_nums+j))
			{
				printf("같은 번호가 있습니다!\n");
				i--;
			}
		}
	}
	
	return 0; 
}

void print_nums(int *lotto_nums)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d ", *(lotto_nums+i));
	}
	
	return 0;
}
