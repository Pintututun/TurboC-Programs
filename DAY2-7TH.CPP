#include<stdio.h>
#include<conio.h>
void main()
{
int a=4,b=8,c=3,d=9,z;
clrscr();
z=a++ + ++b*c-- - --d;
printf("a=%d,b=%d,c=%d\n,d=%d,z=%d\n",a,b,c,d,z);
getch();
}