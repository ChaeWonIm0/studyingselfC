#include <stdio.h>

int main(void)
{
	char str[80] = { 'a', 'p', 'p', 'l', 'j', 'a', 'm' };				 // 문자열 초기화

	char str[80] = "applejam";
	printf("최초 문자열 : %s\n", str);	  // 초기화 문자열 출력
	printf("문자열 입력 : ");
	scanf("%s", str);						// 새로운 문자열 입력
	printf("입력 후 문자열 : %s\n", str);  // 입력된 문자열 출력

	return 0;

	// char형 배열 선언시 주의할 점 : 1) 배열의 크기는 최대한 넉넉하게 선언해야 합니다
	// 2) 배열 요소의 개수는 최소한 '문자열의 길이 + 1' 이어야 합니다.
}