#include <stdio.h>

int main(void)

{

	int a = 5, b = 5;
	int pre, post;

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	pre = (++a) * 3;
	post = (b++) * 3;

	printf("������ : (++a) * 3 = %d\n������ : (b++) * 3 = %d\n", pre, post);

	return 0;
}
// �ϳ��� ���Ŀ��� ���� ������ �� �� �̻� ���� ������ ����� ����
