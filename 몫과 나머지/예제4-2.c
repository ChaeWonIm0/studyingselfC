#include <stdio.h>

int main(void)

{
	double apple;
	int banana, orange;


	apple = 5.0 / 2.0; // 실수 나누기 연산
	banana = 5 / 2; // 정수 나누기 연산
	orange = 5 % 2; // 정수 나머지 연산은 %

	printf("apple : %.1lf\n", apple);
	printf("banana : %d \n", banana);
	printf("orange : %d \n", orange);

	return 0;

}