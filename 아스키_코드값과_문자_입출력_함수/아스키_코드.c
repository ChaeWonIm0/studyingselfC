#include <stdio.h>

int main(void)
{
	char small;
	char cap = 'G'; // char�� ���� ����� �ʱ�ȭ

	if ((cap >= 'A') && (cap <= 'Z')) // �빮�� �����̸�
	{
		small = cap + ('a' - 'A'); // ��,�ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ
	}
	printf("�빮�� : %c %c", cap, '\n'); // \n�� %c�� ��½� ���� �ٲ�
	printf("�ҹ��� : %c", small);

	return 0;

}