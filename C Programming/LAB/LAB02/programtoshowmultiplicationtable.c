#include<stdio.h>
int main()
{
	int i, j; int table=2;
	int max=10;
	for(i=1; i<=table; i++)
	{//outer loop
	    for(j=0;j<=max;j++)
	    {//inner loop
		printf("%d*%d=%d\n", i,j,i*j);
		}
	}
	print("\n");/*blank line between tables*/
	return 0;
}
