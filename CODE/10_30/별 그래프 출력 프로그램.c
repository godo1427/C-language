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
	�ټ� ������ ������ ����� �迭�� ���� ���� �� �׷����� �׸���. ���� 5���� �ϳ��� ����ϸ� ���� ������ ������.
*/ 
