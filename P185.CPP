#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
switch(a=5)
{
case 9-4:puts("+Ve");a++;break;
case 4-9:puts("-Ve");a++;break;
default:puts("Zero");a++;
}
printf("a=%d",a);
getch();
}
