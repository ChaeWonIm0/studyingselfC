#include <stdio.h>
/* # do while �� ���� */
int main(void)
{
	int a;
	
	do
	{
		scanf("%d", &a);
	} while (a >= 0);

	printf("a : %d", a);

	return 0;	
}
/* while�� ���� */
//int main(void)
//{
//	int a = 1;
//	while (a >= 0)
//	{
//		scanf("%d", &a);
//	}
//	printf("a : %d", a);
//	return 0;
//}