#include <stdio.h>

//int main(void)
//{
//	while (1)
//	{
//		printf("Be happy!\n"); // 무한 반복문
//	}
//	return 0;
//}

int main(void)
{
	int count = -1;
	for(;;) // for문의 무한반복
	{
		printf("Be happy!\n"); // 무한 반복문
		count++;
		if (count == 5) break;
	}
	return 0;
}