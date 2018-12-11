#include <stdio.h>

int sum(int, int);

int main(void)
{
	int res;
	int (*fp)(int, int);
	fp = sum;
	res = fp(10, 20);
	printf("result: %d\n", res);
}

int sum(int a, int b)
{
	return a+b;
}

/*함수 포인터 
선언: int(*fp)(int, int);
함수의 호출: fp(10, 20); 
용도: 함수명을 대입하여 호출 함수를 결정한다.
*/ 
