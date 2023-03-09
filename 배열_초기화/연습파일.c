#include <stdio.h>

int main(void)
{
	int ary1[5] = { 1,2,3,4,5 };

	int ary2[5] = { 1, 2, 3 };

	int ary[1000] = { 0 };

	int ary3[] = { 1,2,3 };

	double ary4[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };
	char ary5[5] = { 'a', 'p', 'p', 'l', 'e' };
	
	ary5[0] = 'a';

	printf("%d, %d, %d, %d, %d\n", ary1[5]);
	printf("%d, %d, %d, %d, %d\n", ary2[5]); 
	printf("%d, %d, %d\n", ary[1000]);
	// printf("%d, %d, %d", ary3[]); // 오류 발생
	printf("%lf, %lf, %lf, %lf, %lf\n", ary4[5]);
	printf("%c, %c, %c, %c, %c", ary5[5]);

	return 0;
}

