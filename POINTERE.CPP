#include<stdio.h>
#include<conio.h>
void main()
{
int a=100,b=200,*p=&a,*q=&a;
clrscr();
if(p==q)puts("Pointing same address ");
else puts("Pointing different address ");
q=&b;
if(p==q)puts("Pointing same address ");
else puts("Pointing different address ");
getch();
}