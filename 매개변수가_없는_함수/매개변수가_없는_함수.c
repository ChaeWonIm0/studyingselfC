#include <stdio.h>

//int get_num(void);	// �Լ� ����. void�� �־ �ǰ� ��� ��.
//
int main(void)
{
	int result;
	result = get_num();			// �Լ� ȣ��, ��ȯ���� result�� ������
	printf("��ȯ�� : %d\n", result);	// ��ȯ�� ���
	return 0;
}
//
//int get_num(void)	// �Ű������� ���� ��ȯ���� ����
//{
//	int num;	// Ű���� �Է°��� ������ ����
//	printf("��� �Է� : ");		// �Է� �ȳ� �޽���
//	scanf("%d", &num);		// Ű���� �Է�
//
//	return num;		// �Է��� �� ��ȯ
//}
int get_num(void)	// �Լ� ����. void�� �־ �ǰ� ��� ��.
{
	int num;
	printf("��� �Է� : ");
	scanf("%d", &num);

	while (num < 0)  // ������ �ԷµǸ� �Է� ���� �ݺ���
	{
		printf("����� �Է��ϼ���!\n");
		printf("��� �Է� : ");
		scanf("%d", &num);
	}
	return num;
}

