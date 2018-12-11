/*void 포인터
선언 방법: void *fp;
의미: 가리키는 자료형에  대한 정보가 없다. 
용도: 임의의 주소를 받는 함수의 매개변수에 사용한다.*/

#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.5;
	void *vp;
	
	vp = &a;
	printf("a: %d\n", *((int *)vp));
	vp = &b;
	printf("b: %.1f\n", *((double *)vp));
	
	return 0;
 } 
