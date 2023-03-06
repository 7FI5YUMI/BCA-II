//function with ARGUMENT and NO-RETURN VALUE
#include<stdio.h>
void Addition(int a, int b);
int main()
{
	int a, b;
	printf("\n Please Enter two interger value: \n");
	scanf("%d%d", &a,&b);
	//calling the function with dynamic values
	Addition(a,b);
	return 0;
}
void Addition(int a, int b)
{
	int sum;
	sum=a+b;
	printf("\n Addition of %d and %d is %d \n", a, b, sum);
}
