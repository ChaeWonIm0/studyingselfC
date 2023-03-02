#include <stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft); // float형은 7번째자리 까지만 표현
	printf("double형 변수의 값 : %.20lf\n", db); // double형은 15번째 자리 까지만 표현

	return 0;
}

// 규칙 1. 정수형을 기본으로 사용하고 실수형은 꼭 필요한 경우에만 사용합니다.
// 규칙 2. 실수형은 유효 숫자가 많은 double형을 기본으로 사용합니다.

