#include <stdio.h>

int main(void)

{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a : %d, b : %d\n", a, b); // 차례로 연산이 수행됨
	printf("res : %d\n", res); // res 저장되는 값은 b가 ++된 값

	return 0;

}