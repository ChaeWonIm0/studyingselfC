#include <stdio.h>

int main(void)
{
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str); // %s�� ����ϰ� �迭���� �ش�
	scanf("%s", str);		// �迭�� �Էµ� ���ڿ� ���
	printf("���ۿ� ���� �ִ� �ι�° �ܾ� : %s\n", str);

	return 0;
}