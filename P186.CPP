#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
switch(a=(1,2))
{
case 1:puts("+Ve");a++;break;
case 2:puts("-Ve");a++;break;
default:puts("Zero");a++;
}
printf("a=%d",a);
getch();
}
