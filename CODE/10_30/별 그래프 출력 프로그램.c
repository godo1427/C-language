#include <stdio.h>
#define SIZE 5

void print_graph(int *ps, int size);

int main()
{
	int score[SIZE] = {72, 88, 95, 64, 100};
	print_graph(score, SIZE);

	return 0;
}

void print_graph(int *ps, int size){
	int i, j, star;
	for(i = 0;i<SIZE;i++){
		star = *(ps+i) / 5;
		for(j=0;j<star;j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
}
/*
	다섯 과목의 점수가 저장된 배열의 값에 따라 별 그래프를 그린다. 별은 5점당 하나씩 출력하며 남는 점수는 버린다.
*/ 
