//��ȯ�� �Լ���(�Ű�����1, �Ű�����2) << �Լ� ����
//
//{
//	// �Լ��� �����ϴ� ���. �ᱣ��(�Ű�����1+�Ű�����2)�� ��������
//}

#include <stdio.h>

int sum(int x, int y);

int main(void) // main �Լ� ����
{
	int a = 10, b = 20;
	int result;		// �� ������ ���� ���(result)�� ������ ����

	result = sum(a, b);	// sum �Լ��� ȣ�� (�μ� a b)
	printf("result : %d\n", result); 

	return 0;
} // main �Լ��� ��

int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}

