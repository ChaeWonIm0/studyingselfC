#include <stdio.h>

int main(void)
{
	int a = 21, b = 20, res;
	res = (a > b) ? (res = a) : (res = b);
	printf("ū �� : %d\n", res); // a�� b �� ū ���� res�� ����

	return 0;

}