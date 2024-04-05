#include<stdio.h>
#include<conio.h>
int a=100;
void main()
{
int a=200;
clrscr();
printf("global a=%d\n",::a);
printf("local  a=%d",a);
getch();
}
