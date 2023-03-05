#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)	// a가 0보다 작지만
	
		if (b > 0)
		{
			printf("ok");	// b가 0보다 크면 ok 출력
		}
	
	else  // a가 0 이상이면 ok 출력
	{
		printf("not ok");
	}
	
	return 0;
}