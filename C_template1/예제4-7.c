#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b; // ���� ����� �������ϴ�
	printf("1) %d + %d = %d\n", a, b, a + b); // ���� ����� �ٷ� ��¿� ����մϴ�.
	
	res = a + b; // ���� ����� res�� �����մϴ�.
	printf("2) %d + %d = %d\n", a, b, res); // ����� ���� ���� ����մϴ�.

	return 0;

}