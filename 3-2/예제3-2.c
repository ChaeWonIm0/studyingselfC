#include <stdio.h>

int main(void) 
{
	char ch1 = 'A';  // 문자로 초기화하는 A
	char ch2 = 65;   // 문자의 'A' 아스키 코드값에 해당하는 정수로 초기화

	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch2);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch1, ch2);

	return 0;
}