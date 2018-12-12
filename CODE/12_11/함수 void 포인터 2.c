#include <stdio.h>

void exchange(double *, double *);
void func(void(*fp)(double *, double *), double, double);

int main(void)
{
	double a = 10, b = 20;
	
	func(exchange, a, b);
	
	return 0;
}

void exchange(double *pa, double *pb)
{
	double tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	
	return *pa
}
