#include <stdio.h>


double res;	// ��ȯ���� ������ ���� ����
res = average(1.5, 3.4);	// �Լ� ȣ��

// �Լ� ����
double average(double a, double b)
{
	double temp;
	temp = a + b;
	return(temp / 2.0);
}

