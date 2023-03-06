//function with ARGUMENT and  a RETURN VALUE
#include<stdio.h>
void Multiplication(int , int );
int main()
{
	int a, b, Multi;
	printf("\n Please Enter two interger value: \n");
	scanf("%d%d", &a,&b);
	
	//calling the function with dynamic values;
	Multi= Multiplication(a,b);
	printf("\n Multiplication of %d and %d is %d \n", a, b, Multi);
	return 0;
}
void Multiplication(int a, int b)
{
	int Multi;
	Multi=a*b;
	return Multi;
}
