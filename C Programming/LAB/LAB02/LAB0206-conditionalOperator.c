#include<stdio.h>
int main()
{
	int n1,n2,n3, large;
	printf("Enter n1 & n2:");
	scanf("%d%d%d",&n1,&n2);
	large=n1>n2?n1:n2;
	printf("Larger=%d", large);
	return 0;
}
