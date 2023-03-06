#include<stdio.h>
int main()
{
 int Mat1[2][3], Mat2[3][2],i,j,sum[i][j];
    printf("Enter Mat1:\n");
    for(i=0; i<2; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		scanf("%d", &Mat1[i][j]);
		}
    }
    printf("Enter Mat2:\n");
    for(i=0; i<2; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		scanf("%d", &Mat2[i][j]);
		}
    }
	
    for(i=0; i<2; i++)
    {
    	for(j=0; j<3; j++)
    	{
    		sum[i][j]=Mat1[i][j]+Mat2[i][j];
		}
	}
	printf("\n sum: \n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", sum[i][j]);
		}
		printf("\n");
		
		6
	}
    return 0;
}
