#include <stdio.h>
int main(void)
{
	int i = 0, j = 0; // 별이 존재하는 경우는 1. 행과 열이 합쳐서 4가 되는 경우
	for (j = 0; j < 5; j++) // 2. 행과 열 값이 같은 경우, 이렇게 두 가지만 존재함
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
				printf(" "); // 위의 두 경우가 아니면 space로 띄어줌
				continue;
			}
		}
		printf("\n", j);
		printf(("1" + 2) + (3 + 4));
	}
	printf(("1" + 2) + (3 + 4));
	return 0;
}
