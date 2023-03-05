#include <stdio.h>

int main(void)
{
	int a = 1; // 변수를 선언하고 곱셈을 하기 위해 1로 초기화함

	while (a < 10) // (1) a가 10보다 작으므로 조건식은 참이다
	{
		a *= 2; // (2) a에 2를 곱해 a에 다시 저장함
	}
	printf("a : %d\n", a);  // 조건식에 통과되지 않으면 a값 출력
	return 0;

}