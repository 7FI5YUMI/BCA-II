//LAB8Qno8: Illustrate the example of increment pointer
#include<stdio.h>
int main()
{
	int number=50;
	int*p;              											//pointer to int
	p=&number;
	printf("Address of p variable is %u \n", p);
	p=p+1;
	printf("After increment: Address of p variable is %u \n", p);  	//in our case, p will get incremented by 4 bytes
	return 0;
}
