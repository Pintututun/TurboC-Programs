#include<stdio.h>
#include<conio.h>
int a=1,b=2,c=3;
void main()
{
clrscr();
printf("sum=%d\n",a+b+c);
{
int a=10,b=20,c=30;
printf("sum=%d\n",a+::b+c);
c=1000;
}
int a=100,b=200,c=300;
printf("sum=%d",a+b+::c);
getch();
}