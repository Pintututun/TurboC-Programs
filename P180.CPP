#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
clrscr();
start:
switch(a++)
{
case 1:puts("Hi");break;
case 2:puts("Hello");break;
default:puts("Bye");
}
if(a<=2)goto start;
printf("a=%d",a);
getch();
}


