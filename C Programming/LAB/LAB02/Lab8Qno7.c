//LAB8Qno7: Program that lower case letter to upper case and upper case to lower case by passing of pointer to function.
#include<stdio.h>
void conversion(char *);
int main()
{
	char ch;
	printf("Enter character:");
	scanf("%c", &ch);
	conversion(&ch);
	printf("After conversion:%c", ch);
	return 0;
}
void conversion(char *c)
{
	if(*c>=97 && *c<=122)
		*c=*c-32;
	else if(*c>=65 && *c<=90)
		*c=*c+32;
}
