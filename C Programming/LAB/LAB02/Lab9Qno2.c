
#include<stdio.h>
struct student
{
	int SN;
	char name[10];
	float mark;

}
	std[5];
int main()
{
	int i;
	for(i=0; i<5; i++)
		{
				printf("Enter S.N, Name and Marks:");

			scanf("%d%s%f", &std[i].SN, &std[i].name, &std[i].mark);
		}
	printf("S.N \t\t Name \t\t Marks \n");
	for(i=0; i<5; i++)
		printf("%d\t\t%s\t\t%f\n", std[i].SN, std[i].name, std[i].mark);
	return 0;
}
