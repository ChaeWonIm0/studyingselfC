# include <stdio.h>

int main(void)
{
	int i = 0; // �迭 ��� ÷�� ����
	char str[20]; // ���ڿ��� ������ �迭
	char ch;	// �Է��� ���ڸ� �޾Ƶ� �ӽ� ����

	do  // do ~ while���̳� ���� �� ������ �˻���
	{
		ch = getchar();  // ���� �ϳ� �Է�
		str[i] = ch;	// �迭�� ����
		i++;  // ÷�� ����
	} while (ch != '\n'); // �Է��� ���ڰ� �����̸� ����

	str[--i] = '\0'; // ���� ���ڰ� �Էµ� ��ġ�� �� ����
	printf("%s", str);
	return 0;

}