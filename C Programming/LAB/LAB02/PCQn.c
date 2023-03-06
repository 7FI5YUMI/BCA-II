#include<stdio.h>
#include<math.h>
int main()
{
	int a, n, i;
	float x=0;
	printf("Enter values of a and n:\n");
	scanf("%d%d", &a, &n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		x=x-pow(a,i)/i;
		else
		x=x+pow(a,i)/i;
	}
	printf("x=%f", x);
	return 0;
}
