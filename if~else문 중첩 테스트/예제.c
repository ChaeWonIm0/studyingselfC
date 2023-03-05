#include <stdio.h>

int main(void)
{
	int a = -1, b = 3;
	// if를 else 옆에 붙인 사례. (중괄호 모두 사용, else 중괄호 생략한 사례와 모두 같음)
	if (a >= 10)
	{
		b = 3;
	}
	else if (a >= 0)
		{
			b = 2;
		}
		else
		{
			b = 1;
		}
	
	printf("a : %d, b : %d", a, b);
	return 0;
	// 위의 if~else if~else문이 가장 적절함
}