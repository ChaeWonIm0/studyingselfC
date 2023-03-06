//반환형 함수명(매개변수1, 매개변수2) << 함수 원형
//
//{
//	// 함수가 수행하는 명령. 결괏값(매개변수1+매개변수2)을 돌려보냄
//}

#include <stdio.h>

int sum(int x, int y);

int main(void) // main 함수 시작
{
	int a = 10, b = 20;
	int result;		// 두 정수를 더한 결과(result)를 저장할 변수

	result = sum(a, b);	// sum 함수를 호출 (인수 a b)
	printf("result : %d\n", result); 

	return 0;
} // main 함수의 끝

int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}

