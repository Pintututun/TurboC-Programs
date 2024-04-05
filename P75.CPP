#include<stdio.h>
#include<conio.h>
int a=100;
void main()
{
clrscr();
printf("a=%d\n",a);
{
int a=300;
printf("a=%d\n",a);
a=400;
}
printf("a=%d",a);
getch();
}
