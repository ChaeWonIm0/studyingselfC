#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); // (double)�� �տ� �Ἥ a,b���� �Ǽ��� ����
	printf("a = %d, b = %d\n", a, b);
	printf("a / b �� ��� : %.1lf\n", res);

	a = (int)res; // (int)�� �տ� �Ἥ a���� ���������� ��ȯ��;
	printf("(int) %.1lf�� ��� : %d\n", res, a);
	
	return 0;
}