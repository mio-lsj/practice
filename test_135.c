# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a = 128;
	//00000000000000000000000010000000
	//10000000
	//11111111111111111111111110000000
	printf("%u\n", a);
	return 0;
}