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

/*�Լ� ������ 
����: int(*fp)(int, int);
�Լ��� ȣ��: fp(10, 20); 
�뵵: �Լ����� �����Ͽ� ȣ�� �Լ��� �����Ѵ�.
*/ 
