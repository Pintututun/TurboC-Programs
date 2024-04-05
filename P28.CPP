#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a character-- ");
scanf("%c",&ch);
if(islower(ch))ch=toupper(ch);
else ch=tolower(ch);
printf("Char = %c",ch);
getch();
}