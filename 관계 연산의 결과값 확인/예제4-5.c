#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10; 
	int res;	// ������� ������ ����

	printf("a, b, c�� %d, %d, %d\n", a, b, c);
	res = (a > b); // 10>20�� �����̹Ƿ� ������� 0����
	printf("a > b: %d\n", res);
	res = (a >= b); // 10 >= 20�� �����̹Ƿ� 0
	printf("a>=b : %d\n", res);
	res = (a < b); // 10 <= 20�� ���̹Ƿ� 1
	printf("a<b : %d\n", res);
	res = (a <= b); // 10 <= 20�� ���̹Ƿ� 1
	printf("a<=b : %d\n", res);
	res = (a <= c); // 10 <= 10�� ���̹Ƿ� 1
	printf("a<=c : %d\n", res);
	res = (a == b); // 10 != b�̹Ƿ� ����
	printf("a==b : %d\n", res);
	res = (a != c);
	printf("a!=c : %d", res);

	return 0;
}