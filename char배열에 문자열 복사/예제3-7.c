// �迭���� ���� �����ڸ� ����� �� �����ϴ�.

#include <stdio.h>
#include <string.h> // ���ڿ��� �ٷ� �� �ִ� string.h ��� ������ ����

int main(void)
{
	char fruit[20] = "strawberry";  // �迭 ���� + strawberry�� �ʱ�ȭ

	printf("%s\n", fruit); // strawberry ���
	strcpy(fruit, "banana"); // fruit�� banana ����
	printf("%s\n", fruit);  // banana ���
		
	return 0;
}