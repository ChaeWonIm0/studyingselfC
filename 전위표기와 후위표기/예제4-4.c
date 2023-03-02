#include <stdio.h>

int main(void)

{

	int a = 5, b = 5;
	int pre, post;

	printf("초깃값 a = %d, b = %d\n", a, b);
	pre = (++a) * 3;
	post = (b++) * 3;

	printf("전위형 : (++a) * 3 = %d\n후위형 : (b++) * 3 = %d\n", pre, post);

	return 0;
}
// 하나의 수식에서 같은 변수를 두 번 이상 증감 연산자 사용은 금지
