#include<stdio.h>
int main()
{
	int i, n,a[100],small,large;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("n[]%d]:",i);
		scanf("%d",&a[i]);
		
	}
	small=a[0];
	large=a[0];
	for(i=0; i<n; i++)
	{
		if(small>a[i])
		small=a[i];
		if(large<a[i])
		large=a[i];
	}
	printf("Small=%d \n large=%d", small,large);
	return 0;
}
