//LAB9QNO1: Example of structure
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[50];
};
 int main()
{
	struct employee e1;
	printf("Enter ID:");
	scanf("%d", &e1.id);
	printf("Enter Name:");
	scanf("%s", e1.name);
	printf("Employee id: %d \n", e1.id);
	printf("Employee Name: %s \n", e1.name);
	return 0;
}
