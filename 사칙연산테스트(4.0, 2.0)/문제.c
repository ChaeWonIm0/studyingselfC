#include <stdio.h>

int main(void)
{
	double a = 4.0, b = 1.2;

	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
	printf("%.1f / %.1f = %.1f\n", a, b, a / b);

	return 0;
	// double형이므로 소수점까지 계산함
	// 소수점 첫번째 자리까지 함
}