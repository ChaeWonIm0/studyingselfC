#include <stdio.h>

int main(void)

{
	unsigned int a;

	a = 4294967295;     // 큰 양수 저장
	printf("%d\n", a);  // %d로 출력 (부호 있음)
	a = -1; // 음수 저장
	printf("%u\n", a); // %u로 출력 (부호 무시) == 변환 문자에 따라 잘못된 값 출력함

	return 0;
	
}
// %u는 양수만 저장합니다.