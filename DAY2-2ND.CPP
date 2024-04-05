#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,b=1,c,d;
clrscr();
c=a<b;
d=(a>b)&&(c<b);
printf("c=%d,d=%d\n",c,d);
getch();
}