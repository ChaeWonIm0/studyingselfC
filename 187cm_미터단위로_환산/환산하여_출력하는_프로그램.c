#include <stdio.h>

double centi_to_meter(int a); // �Լ� ����

int main(void)
{
	double res;
	res = centi_to_meter(187);
	printf("�� ��Ƽ���͸� ���ͷ� �ٲٸ� : %.2lfm\n", res);

	return 0;
}

double centi_to_meter(int a)
{
	double temp;
	temp = a * 0.01;

	return temp;
}