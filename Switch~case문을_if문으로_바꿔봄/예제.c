#include <stdio.h>

int main(void)
{
	int rank, m;
	printf("rank�� �Է��ؿ� : \n");
	
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
	printf("��� : %d", m);
	return 0;
}