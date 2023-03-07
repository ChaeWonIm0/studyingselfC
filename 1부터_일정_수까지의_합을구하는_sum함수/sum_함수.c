#include <stdio.h>

int sum(int a); // 함수 선언

int main(void)
{
	sum(10);	// 1부터 10까지의 합 출력
	sum(100);	// 1부터 100까지의 합 출력
	sum(1000);	// 1부터 1000까지의 합 출력
	sum(2); // Debug
	return 0;
}

int sum(int a)  // 함수 원형
{
	int b, k = 0; // 반복 횟수를 세는 변수와 합을 누적할 변수 정의
	for (b = 1; b <= a; b++)	
	{
		k = k + b;

	}
	printf("1부터 %d 까지의 합은 %d입니다.\n", a, k); 
	
}

