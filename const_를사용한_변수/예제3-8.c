/* const �� ����� ����*/

#include <stdio.h>

int main(void)
{
	int income = 0; // income ���� �ʱ�ȭ
	double tax; // ���� ���� �ʱ�ȭ
	const double tax_rate = 0.12; // ������ ���� �ʱ�ȭ

	income = 400; // �ҵ�� ����
	tax = income * tax_rate; // ���� ���� 
	printf("������ : %.1lf�Դϴ�.\n", tax); // tax ������ double�� ���

	return 0;

}
// const�� �ݵ�� ����� ���ÿ� �ʱ�ȭ �ؾ� �մϴ�.