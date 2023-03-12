#include <stdio.h>

void print_month(int *mp);

int main(void)
{
	// �� ���� �ϼ��� ������ �迭
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31 };
	
	print_month(month); 
}

// ������ ��¥ ���ϱ� ���α׷�
void print_month(int *mp)
{
	int i;
	for (i = 0; i < 12; i++)
	{
		printf("\n%4d��", i+1);
		printf("%4d", mp[i]); 
		// �迭�� ���� 5���� �ɶ����� ��ĭ ����
		if ((i + 1) % 4 == 0) printf("\n"); 

	}
	printf("\n");
	
	
}