#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
char ch;
clrscr();
printf("Enter a char--");
scanf("%c",&ch);
if(isalpha(ch))
{
ch=tolower(ch);
switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
case 1:puts("Vowel");break;
default:puts("Consonant");
}
}
else if(isdigit(ch))
{
puts("digit");
}
else
{
 puts("Special char");
 }
getch();
}