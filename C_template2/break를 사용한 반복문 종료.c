#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++) // i는 1부터 10까지 증가하면서 10번 반복함
	{
		sum += i; // i값을 sum에 누적함
		if (sum > 30) break; // 자신이 속한 반복문 하나만 벗어남
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d", i);

	return 0;
			
}