#include <stdio.h>

int sum(int a); // �Լ� ����

int main(void)
{
	sum(10);	// 1���� 10������ �� ���
	sum(100);	// 1���� 100������ �� ���
	sum(1000);	// 1���� 1000������ �� ���
	sum(2); // Debug
	return 0;
}

int sum(int a)  // �Լ� ����
{
	int b, k = 0; // �ݺ� Ƚ���� ���� ������ ���� ������ ���� ����
	for (b = 1; b <= a; b++)	
	{
		k = k + b;

	}
	printf("1���� %d ������ ���� %d�Դϴ�.\n", a, k); 
	
}

