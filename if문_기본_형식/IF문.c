#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10) // 조건식 : a가 10보다 크므로 조건식이 참이다
	{
		b = a; // 실행문 : b = a에 대한 대입문 실행함
	}
	printf("a : %d, b : %d\n", a, b);

	return 0;
	// 규칙 1: if문은 중괄호를 사용하고 들여쓰기하여 실행문을 명확히 구분함
	// 규칙 2 : 실행할 문장이 두 문장 이상이면 반드시 중괄호로 묶음
}