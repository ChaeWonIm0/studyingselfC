// 배열에는 대입 연산자를 사용할 수 없습니다.

#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 string.h 헤더 파일을 포함

int main(void)
{
	char fruit[20] = "strawberry";  // 배열 선언 + strawberry로 초기화

	printf("%s\n", fruit); // strawberry 출력
	strcpy(fruit, "banana"); // fruit에 banana 복사
	printf("%s\n", fruit);  // banana 출력
		
	return 0;
}