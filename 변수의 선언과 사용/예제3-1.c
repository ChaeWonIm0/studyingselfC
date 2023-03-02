#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;
	a = 10;
	b = a;
	c = a + 20;

	da = 3.5;
	ch = 'A';
	
	printf("변수 a의 값 : %d\n", a); // %decimal 숫자
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da); // long float 소수점 첫째자리까지
	printf("변수 ch의 값 : %c\n", ch); // %charecter 문자

	return 0;
}

// 규칙 1. 중괄호의 블록 {} 안에 변수를 선언하며 선언한 위치부터 블록 끝까지 사용할 수 있습니다.
// 규칙 2. 컴파일러에 따라 변수의 선언 위치가 제한될 수 있습니다.
// 규칙 3. 변수의 자료형이 같으면 동시에 둘 이상의 변수를 선언할 수 있습니다.
// 규칙 4. 대입 연산자(=)는 연산자 왼쪽의 변수에 오른쪽의 값을 저장합니다.
// 규칙 5. 변수는 대입 연산자 왼쪽에서는 저장 공간이 되고, 오른쪽에서는 값이 됩니다.
//저장 공간은 l-value 값은 r-value 입니다