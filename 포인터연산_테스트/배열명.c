# include <stdio.h>
void input_ary2(int* pa, int size);
int main(void)
{
	int ary2[5] = { 3,4,5,6,7 };
	int ary[5] = { 1,2,3,4,5 };
	input_ary2(ary2, 5);
	printf(input_ary2); 
	print_ary(ary, 5);
}
void input_ary2(int* pa, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		scanf("%d ", pa + i);
	}
}


// �迭 ����� �Լ� ȣ��

//void print_ary(int* pa, int size);
//
//int main(void)
//{
//	int ary[5] = { 1,2,3,4,5 };
//	print_ary(ary, 5);
//}
	// �Լ� ����
void print_ary(int* pd, int size) 
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", pd[i]);
	}
	// ����
}



