#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b; // 연산 결과는 버려집니다
	printf("1) %d + %d = %d\n", a, b, a + b); // 연산 결과는 바로 출력에 사용합니다.
	
	res = a + b; // 연산 결과를 res에 저장합니다.
	printf("2) %d + %d = %d\n", a, b, res); // 저장된 연산 값을 사용합니다.

	return 0;

}