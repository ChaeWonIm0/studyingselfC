#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)// for�� 3ȸ
	{
		scanf("%c", &ch); // �����Է�
		printf("%c", ch); // �Էµ� ���� ���
	}
	return 0;
}