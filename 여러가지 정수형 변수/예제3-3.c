#include <stdio.h>>

int main(void)
{
	short sh = 32768;		// short���� �ִ� �ʱ�ȭ�̰�, 32767�� �Ѿ�� ������ ���մϴ�
	int in = 2147483647;	// int���� �ִ� �ʱ�ȭ(21474836487 �̻� ���ڴ� ����)
	long ln = 2147483647;	// long���� �ִ� �ʱ�ȭ
	long long lln = 123451234123;	// ���� ū �� �ʱ�ȭ

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln); // longlong���� lld��(8����Ʈ)
	printf("long long ������ ũ�� : %d����Ʈ\n", sizeof(long long)); // sizeof()�� ������ ũ��Ȯ��

}
//Ư���� ��찡 �ƴϸ� �������� int�� ����մϴ�.
//long ���� ū ���� ������ �� ����մϴ�.
