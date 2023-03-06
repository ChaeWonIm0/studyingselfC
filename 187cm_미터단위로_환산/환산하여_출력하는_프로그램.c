#include <stdio.h>

double centi_to_meter(int a); // 함수 선언

int main(void)
{
	double res;
	res = centi_to_meter(187);
	printf("이 센티미터를 미터로 바꾸면 : %.2lfm\n", res);

	return 0;
}

double centi_to_meter(int a)
{
	double temp;
	temp = a * 0.01;

	return temp;
}