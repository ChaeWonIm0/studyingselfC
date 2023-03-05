#include <stdio.h>

int main(void)
{
	int rank, m = 0;
	printf("랭크를 입력하라(1~5) : ");
	scanf("%d", &rank);

	switch (rank) // rank의 값이 얼마인지 확인함
	{
	case 1:		// rank가 1이면
		m = 300;	 // m = 300을 수행하고
				// break 제외 시 실험
	case 2:		// rank가 2면 
		m = 200;	// m = 200을 수행하고
	
	case 3:		// rank가 3이면
		m = 80;		// m = 80을 수행하고
	
	case 4 :	// rank = 4면
		m = 40;	// m = 40을 수행하고

	default:	// rank와 일치하는 case의 값이 없으면
		m = 10;	// m = 10을 수행하고

	}

	printf("m : %d\n", m);
	return 0;
}