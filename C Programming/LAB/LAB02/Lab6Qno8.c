#include<stdio.h>
int main()
{
 int a[2][2];
 int i,j;
    printf("Enter matrix:\n");
    for(i=0; i<2; j++)
    {
        printf("a[%d] [%d}=", i,j);
        scanf("%d", &a[i][j]);

    }
    printf("Your matrix \n");
    for(i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
