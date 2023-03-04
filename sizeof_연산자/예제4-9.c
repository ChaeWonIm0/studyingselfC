#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;
	// sizeof는 연산자임(괄호를 사용하는 연산자)
	printf("int형 변수의 크기 : %d\n", sizeof(a)); // sizeof로 변수의 공간인 bite를 구함
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof (1.5 + 3.4));
	printf("char 자료형의 크기 : %d\b", sizeof(char)); // 에러 결과임


	return 0;
}