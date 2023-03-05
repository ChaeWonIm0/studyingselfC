#include <stdio.h>

int main(void)
{
	int a = 1;
	// 중괄호 날림
	while (a < 10)
	a = a * 2;
	printf("%d",a);
	return 0;

	// 불필요한 에러를 막기 위해 중괄호로 반복할 부분을 항상 묶어줌
}