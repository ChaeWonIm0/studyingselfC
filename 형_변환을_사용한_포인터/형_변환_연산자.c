#include <stdio.h>

// �� ��ȯ ������ (int *)
int main(void)
{
	double a = 3.4;
	double* pd = &a;
	int* pi;
	pi = (int*)pd;

	printf("pi�� �ּҰ�(= &a) : %d\n", pi);
	printf("pd�� �ּҰ�(=a) : %d\n", &pd);

}
