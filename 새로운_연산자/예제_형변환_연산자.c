#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); // (double)을 앞에 써서 a,b값을 실수로 만듬
	printf("a = %d, b = %d\n", a, b);
	printf("a / b 의 결과 : %.1lf\n", res);

	a = (int)res; // (int)를 앞에 써서 a값을 정수형으로 변환함;
	printf("(int) %.1lf의 결과 : %d\n", res, a);
	
	return 0;
}