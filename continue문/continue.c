#include <stdio.h>

int main(void)
{
	int i, sum;
	sum = 0;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0) // i가 3의 배수면 sum 문장을 건너뛰고 블록 끝으로 가서 다시 반복함
		{
			continue; // 문장을 건너뛰다
		}
		sum += i;
		printf("sum : %d\ni : %d\n", sum, i);
	}
	printf("sum : %d\n", sum);
	return 0;

}