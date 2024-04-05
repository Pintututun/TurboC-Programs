#include<stdio.h>
#include<conio.h>
void main()
{
int a=9,b;
clrscr();
b=a++ + a++ + a++;
printf("a=%d,b=%d\n",a,b);
a=9;
b=++a + ++a + ++a;
printf("a=%d,b=%d\n",a,b);
getch();
}
