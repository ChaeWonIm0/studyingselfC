#include <stdio.h>
int main(void)
{
	int seats = 70, audience = 65;
	double rate;
	rate = (double) audience / (double) seats * 100;

	printf("����� : %.1lf%%\n", rate); // �ۼ�Ʈ�� ����� ���� ��ȯ���ڰ� �Բ� ��µǹǷ� %�� �ι� �����

	return 0;
}