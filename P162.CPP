#include<stdio.h>
#include<conio.h>
void main()
{
int a=20;
clrscr();
a=a++/2;
printf("a=%d\n",a);
a=++a/2;
printf("a=%d",a);
getch();
}
