//Program to determine the character entered by the user
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	int ch;
	printf("\n Press any key: ");
	scanf("%c",&ch);
	if(isalpha(ch) > 0)
	printf("\n The user has a entered character");
	if(isdigit(ch) > 0)
	printf("\n The user has a entered digit");
	if(isprint(ch)>0)
	printf("\n the user has a entered printable character..");
	if(ispunct(ch)>0)
	printf("\n the user has a entered punctuation mark");
	if(isspace(ch)>0)
	printf("\n the user has enterd a white space character");
	getch();
}
