#include <stdio.h>


double res;	// 반환값을 저장할 변수 선언
res = average(1.5, 3.4);	// 함수 호출

// 함수 정의
double average(double a, double b)
{
	double temp;
	temp = a + b;
	return(temp / 2.0);
}

