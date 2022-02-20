#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int nest1();
int nest2();
int nest3();
int main()
{
	nest1();
	nest3();
	nest2();
	nest1();
	printf("Ç¶Ì×µ÷ÓÃ");
}
int nest1()
{
	printf("nest1()start~~~~~~~~~\n");
	nest2();
	printf("nest1()end up~~~~~~~~~~~\n");
	return 0;
}
int nest2()
{
	printf("nest2()start>>>>>>>>\n");
	nest3();
	printf("nest2()end up<<<<<<<<\n");
	return 0;
}
int nest3()
{
	printf("nest3()start¡·¡·¡·¡·¡·\n");
	printf("nest3()end up¡¶¡¶¡¶¡¶¡¶\n");
	return 0;
}