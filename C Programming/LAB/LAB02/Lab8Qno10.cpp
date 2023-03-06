/*STRING AND POINTER
string fucntions in C language with examples
-strcpy()
-strcat()
-strlen()
-strcmp()

*/
//lAB08Qno10: Int the following example we are using while loop to print the characters of the string varibale str.
#include<stdio.h>
int main(void)
{
	//string variable
	char str[6] = "Hello";
	//pointer varibale
	char *ptr = str;
	//print the string
	while(*ptr !='\0')
	{
		printf("%c \t", *ptr); //move the ptr pointer to the next memory location
		*ptr++;
	}
	return 0;
}
