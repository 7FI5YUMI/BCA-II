/*String and pointer
*/
//lAB08Qno9: Int the following example we are using while loop to print the characters of the string varibale str.
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
		printf("%c \n", *ptr); //move the ptr pointer to the next memory location
		ptr++;
	}
	return 0;
}
