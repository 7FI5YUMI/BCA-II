#include<stdio.h>
int main()
{
 	int Mat1[2][3], Mat2[3][2];
 	int i,j;
    printf("Enter matrix:\n");
    for(i=0; i<2; i++)
    {
    	for(j=0; j<3; j++)
    	{
		
        printf("Mat1[%d] [%d]=", i,j);
        scanf("%d", &Mat1[i][j]);
		}
    }
    	printf("Your matrix \n");
    	for(i=0; i<2;i++)
		{
        	for(j=0; j<3; j++){
            printf("%d\t", Mat1[i][j]);
        }
        printf("\n");
    }
    
    	printf("Enter matrix:\n");
    	for(i=0; i<3; i++)
		{
    		for(j=0; j<2; j++)
    	{
		
        printf("a[%d] [%d]=", i,j);
        scanf("%d", &Mat2[i][j]);
		}
    }
    	printf("Your matrix \n");
    	for(i=0; i<3;i++){
        for(j=0; j<2; j++){
            printf("%d\t", Mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
