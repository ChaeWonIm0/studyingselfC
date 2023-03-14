#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)// for문 3회
	{
		scanf("%c", &ch); // 문자입력
		printf("%c", ch); // 입력된 문자 출력
	}
	return 0;
}