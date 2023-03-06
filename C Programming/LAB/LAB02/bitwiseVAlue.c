#include<stdio.h>
int main()
{
	int num1=178;
	int num2=63;
	int and1, or, xor;
	and1 =num1 & num2;
	or=num1^num2;
	xor=num1|num2;
	printf("and=%d\n", and1);
	printf("or=%d\n", or);
	printf("xor=%d\n", xor);
	return 0;
}
