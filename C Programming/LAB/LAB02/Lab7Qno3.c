// Module with function
#include<stdio.h>
int large(int a, int b); //decleration/prototype
int main()
{
	int x, y, z, g1, g2;
	printf("Enter X, Y and Z:");
	scanf("%d%d%d", &x, &y, &z);
	g1=large(x,y);  //function call
	g2=large(g1,z);
	printf("greater=%d", g2);
	return 0;
}
int large(int a, int b) // function defination
{
	if(a>b)
	return a; 
	else
	return b;
}
