#include <stdio.h>

//int main(void)
//{
//	while (1)
//	{
//		printf("Be happy!\n"); // ���� �ݺ���
//	}
//	return 0;
//}

int main(void)
{
	int count = -1;
	for(;;) // for���� ���ѹݺ�
	{
		printf("Be happy!\n"); // ���� �ݺ���
		count++;
		if (count == 5) break;
	}
	return 0;
}