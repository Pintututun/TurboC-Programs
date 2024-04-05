#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,b=5;
clrscr();
printf("%d,%d\t",++a,b--);
printf("%d,%d\t",a,b);
printf("%d,%d\t",++a,b++);
printf("%d,%d\n",a,b);
getch();
}