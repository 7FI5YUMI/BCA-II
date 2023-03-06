#include<stdio.h>
int main()
{
	int num1=178;
	int num2=63;
	int and, or, xor;
	and=num1 & num2;
	or=num1^num2;
	xor=num1|num2;
	printf("and=%d\n", and);
	printf("or=%d\n", or);
	printf("xor=%d\n", xor);
	return 0;
}
