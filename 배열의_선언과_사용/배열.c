#include <stdio.h>

int main(void)
{
	int ary[5];  // int 형 요소 5개의 배열 선언
				 // ary는 array의 줄임말
	ary[0] = 10;	// 첫 번째 배열 요소에 10 대입
	ary[1] = 20;	// 두 번째 배열 요소에 20 대입
	ary[2] = ary[0] + ary[1];	// 첫 번째와 두 번째 요소를 더해 세 번째 요소에 저장
	scanf("%d", &ary[3]);	// 키보드로 입력받아 네 번째 요소에 저장

	printf("%d\n", ary[0]);	// 0번째 요소 출력
	printf("%d\n", ary[1]); // 1번째 요소 출력
	printf("%d\n", ary[2]); // 2번째 요소 출력
	printf("%d\n", ary[3]); // 3번째 요소 출력
	printf("%d\n", ary[4]); // 4번째 요소지만 입력된 값이 없어서 쓰레기 값 출력

	return 0;
}