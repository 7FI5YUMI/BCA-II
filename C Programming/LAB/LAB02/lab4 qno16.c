#include<stdio.h>
int main()
{
	int i;
	double number,sum=0.0;
	for(i=1;i<=10;++i)
	{
		printf("Enter a n%d:",i);
		scanf("%lf",&number);
		if(number<0.0){//if the user enters a negative number,break the loop 
		break;
		}
		sum+=number;//sum=sum+number;
	}
	printf("sum=%.2lf",sum);
	return 0;
}
