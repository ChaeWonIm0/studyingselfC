#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1; //a가 0보다 크거나 같으면 a에 1 대입함
	}
	else
	{
		a = -1; // a가 0보다 작으면 a에 -1 대입함
	}
	printf("a : %d\n", a);
	return 0;

	// 규칙1 : if~else문의 else에는 조건을 사용하지 않음
	// 규칙2 : 실행할 문장이 두 문장 이상이면 반드시 중괄호로 묶음.
	// 규칙3 : 경우에 따라 if문을 두번 사용하는 것보다 if~else문을 한 번 사용하는 것이 나음.
}
