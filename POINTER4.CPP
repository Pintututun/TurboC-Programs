#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int i,c=0,v=0;
char s[50],*p;
clrscr();
p=s;
printf("Enter a string--");
gets(s);
for(i=0;*p;i++,p++)
{
*p=tolower(*p);
if(isalpha(*p))
{
if(((*p)=='a')||((*p)=='e')||((*p)=='i')||((*p)=='o')||((*p)=='u'))
{
v++;
}
else c++;
}
else continue;
}
printf("NUMBER OF VOWELS=%d",v);
printf("\nNUMBER OF CONSONANTS=%d",c);
getch();
}