#include <stdio.h>

int main(void)
{
	int rank, m;
	printf("rank를 입력해요 : \n");
	
	scanf("%d", &rank);

	if (rank == 1)
	{
		m = 300;
	}
	else if (rank == 2)
	{
		m = 200;
	}
	else if (rank == 3)
	{
		m = 100;
	}
	else
	{
		m = 10;
	}
	printf("상금 : %d", m);
	return 0;
}