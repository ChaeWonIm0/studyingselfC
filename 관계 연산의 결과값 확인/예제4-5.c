#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10; 
	int res;	// 결과값을 저장할 변수

	printf("a, b, c는 %d, %d, %d\n", a, b, c);
	res = (a > b); // 10>20은 거짓이므로 결과값을 0배출
	printf("a > b: %d\n", res);
	res = (a >= b); // 10 >= 20은 거짓이므로 0
	printf("a>=b : %d\n", res);
	res = (a < b); // 10 <= 20은 참이므로 1
	printf("a<b : %d\n", res);
	res = (a <= b); // 10 <= 20은 참이므로 1
	printf("a<=b : %d\n", res);
	res = (a <= c); // 10 <= 10도 참이므로 1
	printf("a<=c : %d\n", res);
	res = (a == b); // 10 != b이므로 거짓
	printf("a==b : %d\n", res);
	res = (a != c);
	printf("a!=c : %d", res);

	return 0;
}