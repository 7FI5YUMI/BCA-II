//LAB5Qno10: Program to find 3x3 matrix multiplication
#include<stdio.h>
int main()
{
	int mat1[3][3],mat2[3][3], sum[3][3], i,j,k;
	printf("Enter 1st matrix:");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3;j++)
		{
			printf("Mat1[%][%]:", i,j);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("Enter 2nd matrix:");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3;j++)
		{
			printf("Mat2[%][%]:", i,j);
			scanf("%d", &mat2[i][j]);
		}
	} 
	//Multiplication calculation
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum[i][j]=0;
			for(k=0; k<3; k++)
			{
				sum[i][j]=sum[i][j]+mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("\n Multiplication:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
