#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a char--");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
ch+=32;
}
if(ch>='a'&&ch<='z')
{
switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
case 1:puts("Vowel");break;
default:puts("Consonant");puts("EXIT");
}
}
else if(ch>='0'&&ch<='9')
{
puts("Digit");
}
else
 {
 puts("Special char");
 }
getch();
}