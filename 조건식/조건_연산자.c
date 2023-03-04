#include <stdio.h>

int main(void)
{
	int a = 21, b = 20, res;
	res = (a > b) ? (res = a) : (res = b);
	printf("큰 값 : %d\n", res); // a와 b 중 큰 값을 res에 저장

	return 0;

}