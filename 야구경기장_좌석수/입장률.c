#include <stdio.h>
int main(void)
{
	int seats = 70, audience = 65;
	double rate;
	rate = (double) audience / (double) seats * 100;

	printf("입장률 : %.1lf%%\n", rate); // 퍼센트를 사용할 때는 변환문자가 함께 출력되므로 %를 두번 사용함

	return 0;
}