#include<stdio.h>
void Addition();
int main()
{
	printf("\n........\n");
	Addition();
	return 0;
}
void Addition()
{
	int sum, a=10, b=20;
	sum = a+b;
	printf("\n Sum of a = %d and b = %d is = %d", a, b, sum);
}
