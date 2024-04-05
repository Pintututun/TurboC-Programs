#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
clrscr();
start:
switch(a)
{
case 1:puts("Hi");a++;break;
case 2:puts("hello");a++;break;
default:puts("Bye");a++;
}
if(a<=2)goto start;
printf("a=%d",a);
getch();
}
