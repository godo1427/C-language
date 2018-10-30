#include <stdio.h>
void rotate(int *pa, int *pb, int *pc);

int main()
{
	int a, b, c, input ;
	a = 1; b = 2; c = 3;
	
	while(1)
	{
		printf("%d:%d:%d", a, b, c);
		if(getchar()!='\n')
			break;
		rotate(&a, &b, &c);
	}
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}
