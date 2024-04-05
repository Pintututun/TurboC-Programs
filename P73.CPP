#include<stdio.h>
#include<conio.h>
int a=100;
void main()
{
int a=200;
clrscr();
printf("a=%d\n",a);
{
a=300;
printf("a=%d\n",a);
}
printf("a=%d",a);
getch();
}
