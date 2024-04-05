#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a character");
ch=getchar();
if(islower(ch))printf("Lower case char");
else if(isupper(ch))printf("Upper case character");
else if(isdigit(ch))printf("Digit");
else printf("Special Character");
getch();
}