
#include<stdio.h>
#include<conio.h>
void main()
{
int *p;
clrscr();
{
int a=100;
p=&a;
printf("a=%d\n",*p);
}
printf("a=%d\n",*p);
p=0;
printf("a=%d",*p);
getch();
}