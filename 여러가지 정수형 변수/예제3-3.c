#include <stdio.h>>

int main(void)
{
	short sh = 32768;		// short형의 최댓값 초기화이고, 32767을 넘어가면 음수로 변합니다
	int in = 2147483647;	// int형의 최댓값 초기화(21474836487 이상 숫자는 음수)
	long ln = 2147483647;	// long형의 최댓값 초기화
	long long lln = 123451234123;	// 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln); // longlong형이 lld임(8바이트)
	printf("long long 변수의 크기 : %d바이트\n", sizeof(long long)); // sizeof()로 변수의 크기확인

}
//특별한 경우가 아니면 정수형은 int를 사용합니다.
//long 형은 큰 값을 저장할 때 사용합니다.
