#include <stdio.h>

int main(void)
{
	int i, j, k;
	for (i = 2; i < 10; i++) // i가 2에서 9까지 변하면서 8번 반복함
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
