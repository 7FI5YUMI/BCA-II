#include<stdio.h>
int Multiplication();
int main()
{
	int Multi;
	Multi = Multiplication();
	printf("\n Multiplication of and b is = %d \n", Multi);
	return 0;
}
int Multiplication()
{
	int Multi, a=20, b=30;
	Multi = a*b;
	return Multi;
}
