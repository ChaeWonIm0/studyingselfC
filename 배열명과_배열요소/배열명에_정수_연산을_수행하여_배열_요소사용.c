#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}

	return 0;
// 배열의 대괄호는 포인터 연산의 간접 참조, 괄호, 더하기 연산 기능을 갖습니다.

}