#include <stdio.h>
int main(void)
{
	int i = 0, j = 0; // ���� �����ϴ� ���� 1. ��� ���� ���ļ� 4�� �Ǵ� ���
	for (j = 0; j < 5; j++) // 2. ��� �� ���� ���� ���, �̷��� �� ������ ������
	{
		for (i = 0; i < 5; i++)
		{
			if (i + j == 4) 
			{
				printf("*");
			}
			else if (i == j)
			{
				printf("*");
			}
			else
			{
				printf(" "); // ���� �� ��찡 �ƴϸ� space�� �����
				continue;
			}
		}
		printf("\n", j);
		printf(("1" + 2) + (3 + 4));
	}
	printf(("1" + 2) + (3 + 4));
	return 0;
}
