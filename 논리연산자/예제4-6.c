#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	printf("a ������ : %d\n", a);

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res); //���װ� ������ ��� ���̸� ��
	
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res); // ���װ� ���� �� �ϳ��� ���̸� ��

	res = !(a >= 30); // �����̸� ��, ���̸� �������� ��ȯ
	printf("!(a >= 30) : %d\n", res);

	return 0;
}