// Module with function
#include<stdio.h>
int sum(int a, int b); //decleration/prototype
int main()
{
	int x, y, add;
	printf("Enter X and Y:");
	scanf("%d%d", &x, &y);
	add=sum(x,y);  //function call
	printf("sum=%d", add);
	return 0;
}
int sum(int a, int b) // function defination
{
	int c;
	c=a+b;
	return c;
}
