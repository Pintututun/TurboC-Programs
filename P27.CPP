#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character--");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')ch=ch-32;
else if(ch>='A'&&ch<='Z')ch=ch+32;
printf("Char = %c",ch);
getch();
}