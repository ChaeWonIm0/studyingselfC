#include <stdio.h>

// 형 변환 연산자 (int *)
int main(void)
{
	double a = 3.4;
	double* pd = &a;
	int* pi;
	pi = (int*)pd;

	printf("pi의 주소값(= &a) : %d\n", pi);
	printf("pd의 주소값(=a) : %d\n", &pd);

}
