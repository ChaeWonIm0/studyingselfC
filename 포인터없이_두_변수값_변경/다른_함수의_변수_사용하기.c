#include <stdio.h>

void swap(void); // �� ������ ���� �ٲٴ� �Լ� ����

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);			// �μ� ���� �Լ� ȣ��
	printf("a:%d, b:%d\n", a, b);  // ���� a, b ���

	return 0;
}

void swap(int x, int y)  // �μ� a, b�� ���� x, y�� �����ؼ� ����
{
	int temp; // ��ȯ�� ���� ����

	temp = x;  // temp�� x�� ����
	x = y;     // x�� y�� ����
	y = temp;  // y�� temp�� ����
}