#include <stdio.h>
int main(void)
{
	int res;
	res = sizeof(short) > sizeof(long);
	// sizeof의 피연산자로 자료형 이름을 사용하여 크기를 bite단위로 계산함
	// short형의 크기가 long형보다 크면 1, 그렇지 않으면 0을 res에 저장함
	printf(res == 1 ? "short" : "long");
	// res가 1과 같으면 short형의 크기가 크므로 출력하고, 그렇지 않으면 long을 출력함
	return 0;
}