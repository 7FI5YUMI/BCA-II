// Module with function
#include<stdio.h>
int large(int a, int b); //decleration/prototype
int main()
{
	int x, y, greater;
	printf("Enter X and Y:");
	scanf("%d%d", &x, &y);
	greater=large(x,y);  //function call
	printf("greater=%d", greater);
	return 0;
}
int large(int a, int b) // function defination
{
	if(a>b)
	return a; 
	else
	return b;
}
