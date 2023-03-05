#include <stdio.h>

int main(void)
{
	int a = 1; // 변수를 선언하고 1로 초기화함
	scanf("%d", &a); // 어떤 값을 입력해도 do 한번은 실행함
	do  // 반복문 시작 위치임
	{
		a *= 2;	// a를 2 곱한다
	} while (a < 10);	// a가 10보다 작으면 10행 반복함
	printf("a : %d", a);  // 세미콜론 주의. 반복이 끝난 후 a값 출력함
	return 0;	
	// 문장이 한문장이면 중괄호 생략 가능함
}