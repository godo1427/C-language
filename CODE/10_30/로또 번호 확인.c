#include <stdio.h>
#define SIZE 6
int check_same(int *lotto_nums, int *my_num);

int main()
{
	int i, check, sum = 0;
	int lotto_nums[SIZE] = {4, 10, 25, 30, 41, 45};
	int my_nums[SIZE] = {1, 4, 7, 22, 41, 43};
	
	for(i=0;i<SIZE;i++)
	{
		check =	check_same(lotto_nums, &my_nums[i]);
		sum += check;
	}
	printf("일치하는 번호의 개수: %d", sum);
	
	return 0;
 } 
 
 int check_same(int *lotto_nums, int *my_num){
 	int i;
 	for(i=0;i<SIZE;i++)
 	{
 		if(*my_num == *(lotto_nums+i))
			return 1;
	 }

	 return 0;
 } 
