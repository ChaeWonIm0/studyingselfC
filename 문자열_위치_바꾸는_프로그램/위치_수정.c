#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80];
	char temp[80];

	printf("두 문자열 입력하기 : ");
	scanf("%s %s", str1, str2);
	printf("바꾸기 전 문자 : %s, %s\n", str1, str2);
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("바꾼 후 문자 : %s, %s\n", str1, str2);
	return 0;
}