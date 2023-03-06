#include<stdio.h>
int main()
{
	int mat[3][3], tran[3][3], sum[3][3], i,j;
	printf("Enter 1st matrix:");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3;j++)
		{
			printf("Mat[%][5]:", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n The matrix to be transposed: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
	  	printf("%d\t", mat[i][j]);
		printf("\n");
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			tran[j][i]=mat[i][j];
		}
	}
	printf("\n The transpose matrix is:\n");
	for(i=0; i<3; i++)
	{
		
		for(j=0; j<3; j++)
		printf("%d \t", tran[i][j]);
		printf("\n");
	}
	return 0;
}
