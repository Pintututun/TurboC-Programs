#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=10,temp;clrscr();
temp=a;
a=b;
b=temp;
printf("a=%d,b=%d\n",a,b);
getch();
}