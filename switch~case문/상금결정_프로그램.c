#include <stdio.h>

int main(void)
{
	int rank, m = 0;
	printf("��ũ�� �Է��϶�(1~5) : ");
	scanf("%d", &rank);

	switch (rank) // rank�� ���� ������ Ȯ����
	{
	case 1:		// rank�� 1�̸�
		m = 300;	 // m = 300�� �����ϰ�
				// break ���� �� ����
	case 2:		// rank�� 2�� 
		m = 200;	// m = 200�� �����ϰ�
	
	case 3:		// rank�� 3�̸�
		m = 80;		// m = 80�� �����ϰ�
	
	case 4 :	// rank = 4��
		m = 40;	// m = 40�� �����ϰ�

	default:	// rank�� ��ġ�ϴ� case�� ���� ������
		m = 10;	// m = 10�� �����ϰ�

	}

	printf("m : %d\n", m);
	return 0;
}