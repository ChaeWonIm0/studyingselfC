#include <stdio.h>

int main(void)
{
	int i, j, k;
	for (i = 2; i < 10; i++) // i�� 2���� 9���� ���ϸ鼭 8�� �ݺ���
	{
		for (j = 1; j < 10; j++)
		{
			k = j * i;
			printf("%d x %d = %d\n", i, j, k);
		}
		printf("\n");
	}
	return 0;
}
