#include <stdio.h>

int main(void)
{
	int i, sum;
	sum = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0) // i�� 3�� ����� sum ������ �ǳʶٰ� ��� ������ ���� �ٽ� �ݺ���
		{
			continue; // ������ �ǳʶٴ�
		}
		sum += i;
		printf("sum : %d\ni : %d\n", sum, i);
	}
	printf("sum : %d\n", sum);
	return 0;

}