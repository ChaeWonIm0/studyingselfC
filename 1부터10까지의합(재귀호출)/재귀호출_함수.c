#include <stdio.h>

int rec_func(int b);

int main(void)
{
	int b;
	b = rec_func(5);
	printf("°á°ú : %d\n", b);
	return 0;
}


int rec_func(int b)
{
	if (b == 1) return 1 ;
	else return (b + rec_func(b - 1));
}
