#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a character ");
ch=getchar();
if(islower(ch))puts("Lower case character");
else if(isupper(ch))puts("Upper case character");
else if(isdigit(ch))puts("Digit");
else if(isspace(ch))puts("Space");
else puts("Special character");
getch();
}