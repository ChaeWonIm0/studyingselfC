#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str); // %s를 사용하고 배열명을 준다
	scanf("%s", str);		// 배열에 입력된 문자열 출력
	printf("버퍼에 남아 있는 두번째 단어 : %s\n", str);

	return 0;
}