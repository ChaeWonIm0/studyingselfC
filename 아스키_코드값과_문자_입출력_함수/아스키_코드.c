#include <stdio.h>

int main(void)
{
	char small;
	char cap = 'G'; // char형 변수 선언과 초기화

	if ((cap >= 'A') && (cap <= 'Z')) // 대문자 범위이면 >>>
	{
		small = cap + ('a' - 'A'); // 대,소문자의 차이를 더해 소문자로 변환
	}
	printf("대문자 : %c", cap, '\n'); // \n을 %c로 출력시 줄이 바뀜
	printf("소문자 : %c", small);

	return 0;
	// 특징은 작은따옴표로만 사용이 가능하다
}