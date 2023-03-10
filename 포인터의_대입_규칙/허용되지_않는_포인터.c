#include <stdio.h>

int main(void)
{
	int a = 10; // 변수 선언 초기화
	int* p = &a;  // 포인터 선언과 a를 가리키도록 초기화
	double* pd;  // double형 변수를 가리키는 포인터

	pd = p; // 포인터 p 값을 포인터 pd에 대입
	printf("%d\n", *p);  // a의 포인터 출력
	printf("%1lf\n", *pd); // pd가 가리키는 변수 출력

	// 규칙 1) 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
	// 이상한 주소 출력됨
}