#include<stdio.h>
int main()
{
	int i, a[5], sum=0;
	printf("Enter No:");
	for(i=0; i<5; i++)
	{
		printf("\n[%d]=", i);
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	for(i=0; i<5; i++)
	{
		printf("\n[%d]=%d", i, a[i]);
	}
	printf("sum=%d", sum);
	return 0;
}
