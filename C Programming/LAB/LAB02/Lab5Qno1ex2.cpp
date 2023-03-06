#include<stdio.h>
int main()
{
	int i, a[10];
	printf("Enter No:");
	for(i=0; i<10; i++)
	{
		printf("\n[%d]=", i);
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; i++)
	{
		if(a[i]%2==0)
		printf("\n[%d]=%d", i, a[i]);
	}
	return 0;
}
