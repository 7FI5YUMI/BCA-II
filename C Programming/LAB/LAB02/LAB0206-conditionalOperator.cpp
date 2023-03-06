#include<stdio.h>
int main()
{
	int n1,n2,n3, large1, large;
	printf("Enter n1 & n2 &n3:");
	scanf("%d%d%d",&n1,&n2,&n3);
	large1=n1>n2?n1:n2;
	large=large1>n3?large1:n3;
	printf("Larger=%d", large);
	return 0;
}
