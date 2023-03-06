#include<stdio.h>
int main()
{
	int i, n,a[100],small,large, j, temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("n[%]d]:",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Ascending:\n");
	for(i=0; i<n; i++)
	printf("%d \t", a[i]);
		printf("\nDescending:\n");
	for(i=n-1; i>=0; i--)
	printf("%d \t", a[i]);
	return 0;
}
