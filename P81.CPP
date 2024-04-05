#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,b=-20;
clrscr();
printf("Sum=%d\n",a-(-b));
printf("Sum=%d\n",a- -b);
printf("Sum=%d\n",a-(~b)-1);
getch();
}