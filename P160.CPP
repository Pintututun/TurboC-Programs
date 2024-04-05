#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,b=9;
clrscr();
a=a++ + ++b;
b=++a + b++;
printf("a=%d,b=%d",a,b);
getch();
}
