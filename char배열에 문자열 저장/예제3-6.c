#include <stdio.h>

int main(void) {
	char fruit[20] = "strawberry"; // ���ڿ��� ���̿��� null��ŭ�� 1�� �׻� ���Ե˴ϴ�
	//char �迭 ����� ���ڿ� �ʱ�ȭ �մϴ�

	printf("%s\n", fruit);
	printf("����� ����� �ϸ� : %s %s\n", fruit, "raspberry[�����]");  // �迭������ ����� ���ڿ��� ����մϴ�.
	printf("����´�� ����� �ϸ�? : %s %s\n", fruit, "jam");  // ���ڿ� ����� ���� %s�� ����մϴ�.

	return 0;
}