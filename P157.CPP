#include<stdio.h>
#include<conio.h>
void main()
{
int a=3,b;
clrscr();
b=++a + a++ * ++a;
printf("a=%d,b=%d",a,b);
getch();
}
