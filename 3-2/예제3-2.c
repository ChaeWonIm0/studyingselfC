#include <stdio.h>

int main(void) 
{
	char ch1 = 'A';  // ���ڷ� �ʱ�ȭ�ϴ� A
	char ch2 = 65;   // ������ 'A' �ƽ�Ű �ڵ尪�� �ش��ϴ� ������ �ʱ�ȭ

	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch2);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch1, ch2);

	return 0;
}