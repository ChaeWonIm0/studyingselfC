#include <stdio.h>

void print_month(int *mp);

int main(void)
{
	// 각 달의 일수를 저장한 배열
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
	
	print_month(month); 
}

// 월별로 날짜 구하기 프로그램
void print_month(int *mp)
{
	int i;
	for (i = 0; i < 12; i++)
	{
		printf("\n%4d월", i+1);
		printf("%4d", mp[i]); 
		// 배열의 값이 5개가 될때마다 한칸 띄어쓰기
		if ((i + 1) % 4 == 0) printf("\n"); 

	}
	printf("\n");
	
	
}