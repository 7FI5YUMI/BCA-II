//Program to swap two numbers using call by refrence.
#include<stdio.h>
void swap(int *, int*);
int main()
{
	int a,b;
	a=100;
	b=50;
	printf("\n Before swapping a=%d \t b=%d", a,b);
	swap(&a, &b);
	printf("\n After swapping a=%d \t b=%d", a,b);
	return 0;
}
void swap(int *a, int *b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\n The function within function are a=%d \t b=%d", *a, *b);
}
