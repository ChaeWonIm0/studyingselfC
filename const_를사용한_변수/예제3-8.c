/* const 를 사용한 변수*/

#include <stdio.h>

int main(void)
{
	int income = 0; // income 변수 초기화
	double tax; // 세금 변수 초기화
	const double tax_rate = 0.12; // 세금율 변수 초기화

	income = 400; // 소득액 저장
	tax = income * tax_rate; // 세금 계산식 
	printf("세금은 : %.1lf입니다.\n", tax); // tax 변수를 double로 출력

	return 0;

}
// const는 반드시 선언과 동시에 초기화 해야 합니다.