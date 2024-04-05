#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character--- ");
scanf("%c",&ch);
if(ch>=97&&ch<=122)puts("Lower case character");
else if(ch>=65&&ch<=90)puts("Upper case character");
else if(ch>=48&&ch<=57)puts("Digit");
else if(ch==32)puts("Space");
else puts("Special character");
getch();
}