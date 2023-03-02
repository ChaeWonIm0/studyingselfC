#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	printf("a 변수는 : %d\n", a);

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res); //좌항과 우항이 모두 참이면 참
	
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res); // 좌항과 우항 중 하나라도 참이면 참

	res = !(a >= 30); // 거짓이면 참, 참이면 거짓으로 반환
	printf("!(a >= 30) : %d\n", res);

	return 0;
}