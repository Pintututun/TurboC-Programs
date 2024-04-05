#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
switch(a=5/5)
{
case 5%5:puts("+Ve");a++;break;
case 5>=5:puts("-Ve");a++;break;
default:puts("Zero");a++;
}
printf("a=%d",a);
getch();
}