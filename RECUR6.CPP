#include<stdio.h>
#include<conio.h>
int reverse(char*p,int i)
{
for(--i;i>=0;i--)
{
puts("REVERSE STRING--");
putchar(p[i]);
}
return 0;
}
void main()
{
int i;
char s[50];
clrscr();
printf("Enter a string--");
gets(s);
for(i=0;s[i]!='\0';i++);
reverse(s,i);
getch();
}
