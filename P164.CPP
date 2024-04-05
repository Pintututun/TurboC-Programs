#include<stdio.h>
#include<conio.h>
void main()
{
int a=3,b=4,c=10;
clrscr();
c=++a>b++;
printf("a=%d,b=%d,c=%d",a,b,c);
getch();
}
