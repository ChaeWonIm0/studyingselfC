#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) // i�� 1���� 10���� �����ϸ鼭 10�� �ݺ���
	{
		sum += i; // i���� sum�� ������
		if (sum > 30) break; // �ڽ��� ���� �ݺ��� �ϳ��� ���
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d", i);

	return 0;
			
}