#include <stdio.h>
int main(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2; // 우선순위가 같으므로 차례대로 연산
	printf("res = %d\n", res);
	res = ++a * 3; // a의 값을 1 증가시키고 곱셈 연산
	printf("res = %d\n", res);
	res = (a > b) && (a != 5); // a > b의 결과와 a!=5의 결과를 && 연산
	printf("res = %d\n", res);
	res = a % 3 == 0; // a % 3의 값이 0과 같은지 확인
	printf("res = %d\n", res);
	return 0;
	// C에는 boolean 값이 없음
}