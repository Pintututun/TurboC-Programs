#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a character--");
scanf("%c",&ch);

if(isalpha(ch))
{
ch=tolower(ch);
switch(ch)
{
case 'a':case 'e':case 'i':case 'o':case 'u':puts("Vowel");
	 break;
default:puts("Consonant");
}
}
else if(isdigit(ch))puts("Digit");
else puts("Special character");
getch();
}