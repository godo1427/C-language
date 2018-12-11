#include <stdio.h>

int func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
	int sel;
	
	printf("1. �� ������ ��\n");
	printf("2. �� ������ ��\n");
	printf("3. �� ���� �߿��� ū �� ���\n");
	scanf("%d", &sel);
	
	switch(sel)
	{
		case 1: func(sum); break;
		case 2: func(mul); break;
		case 3: func(max); break;
	}
	
	return 0;
 } 
 
 int func(int (*fp)(int, int))
 {
 	int a, b;
 	int res;
 	
 	printf("�� �������� �Է��ϼ���: ");
 	scanf("%d %d", &a, &b);
 	res = fp(a, b);
 	printf("�������: %d\n", res);
 }
 
 int sum(int a, int b)
 {
 	return (a + b);
 }
 
 int mul(int a, int b)
 {
 	return (a*b);
 }
 
 int max(int a, int b)
 {
 	if(a>b) return a;
 	else return b;
 }
