#include <stdio.h>

int main(void)
{
	int a = -1, b = 3;
	// if�� else ���� ���� ���. (�߰�ȣ ��� ���, else �߰�ȣ ������ ��ʿ� ��� ����)
	if (a >= 10)
	{
		b = 3;
	}
	else if (a >= 0)
		{
			b = 2;
		}
		else
		{
			b = 1;
		}
	
	printf("a : %d, b : %d", a, b);
	return 0;
	// ���� if~else if~else���� ���� ������
}