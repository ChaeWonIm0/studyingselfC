#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b); // 비트별 논리곱 연산 수행
	printf("a ^ b : %d\n", a ^ b); // 비트별 배타적 논리곱 연산 수행
	printf("a | b : %d\n", a | b); // 비트별 논리합 연산 수행
	printf("~a : %d\n", ~a); // 비트별 부정 연산 수행
	printf("a << 1 : %d\n", a << 1); // 비트 이동(왼쪽) 연산
	printf("a >> 2 : %d\n", a >> 2); // 비트 이동(오른쪽) 연산자

	a <<= 1; // 비트 연산자를 복합 대입 연산자로 사용도 가능함
	printf("a <<=1 : %d", a);
	return 0;
}