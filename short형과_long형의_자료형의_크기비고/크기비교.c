#include <stdio.h>
int main(void)
{
	int res;
	res = sizeof(short) > sizeof(long);
	// sizeof�� �ǿ����ڷ� �ڷ��� �̸��� ����Ͽ� ũ�⸦ bite������ �����
	// short���� ũ�Ⱑ long������ ũ�� 1, �׷��� ������ 0�� res�� ������
	printf(res == 1 ? "short" : "long");
	// res�� 1�� ������ short���� ũ�Ⱑ ũ�Ƿ� ����ϰ�, �׷��� ������ long�� �����
	return 0;
}