//Program to read 10 numbers in an array and find their sum and display using the function
#include<stdio.h>
int sum(int n[]);
void display(int n[]);
int main()
{
	int i, a[10];
	printf("Enter 10 numbers:");
	for(i=0; i<10; i++)
		scanf("%d", &a[i]);
	display(a);
	printf("\n The sum of 10 numbers=%d", sum(a));
	return 0;
}
int sum(int n[])
{
	int i, sum=0;
	for(i=0; i<10; i++)
		sum=sum + n[i];
	return sum;
}
void display(int n[])
{
	int i;
	printf("Your 10 numbers are: \n");
	for(i=0; i<10; i++)
		printf("%d \t", n[i]);
}
