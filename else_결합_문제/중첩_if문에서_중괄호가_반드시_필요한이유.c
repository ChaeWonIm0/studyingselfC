#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;

	if (a < 0)	// a�� 0���� ������
	
		if (b > 0)
		{
			printf("ok");	// b�� 0���� ũ�� ok ���
		}
	
	else  // a�� 0 �̻��̸� ok ���
	{
		printf("not ok");
	}
	
	return 0;
}