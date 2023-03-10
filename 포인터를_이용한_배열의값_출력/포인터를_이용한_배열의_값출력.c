#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa); // pa가 가리키는 배열 요소 출력
		*pa++; // pa나 *pa나 결과는 같다
	}
	return 0;
}