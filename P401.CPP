#include<stdio.h>
#include<conio.h>
void main()
{
int i=5;
clrscr();
do
{
putchar(i+100);
printf("%d",i--);
}while(i);
getch();
}
