#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter a and b:");
	scanf("%d%d, &a, &b");
	b+=a;
	printf("Value of b=%d",b);
	c=a++;
	printf("\nValue of c=%d",c);
	printf("\nValue of a=%d",a);
	return 0;
}
