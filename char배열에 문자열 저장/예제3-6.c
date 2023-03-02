#include <stdio.h>

int main(void) {
	char fruit[20] = "strawberry"; // 문자열의 길이에는 null만큼의 1이 항상 포함됩니다
	//char 배열 선언과 문자열 초기화 합니다

	printf("%s\n", fruit);
	printf("딸기는 영어로 하면 : %s %s\n", fruit, "raspberry[산딸기]");  // 배열명으로 저장된 문자열을 출력합니다.
	printf("딸기쨈을 영어로 하면? : %s %s\n", fruit, "jam");  // 문자열 상수를 직접 %s로 출력합니다.

	return 0;
}