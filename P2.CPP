#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("Lower case character");
else if(ch>='A'&&ch<='Z')
printf("Upper case character");
else if(ch>='0'&&ch<='9')
printf("Digit");
else printf("Special character");
getch();
}