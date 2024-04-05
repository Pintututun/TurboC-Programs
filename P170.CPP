#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
a=b=c=4;
d=a++!=4||++b!=c++;
printf("a=%d,b=%sd,c=%d,d=%d",a,b,c,d);
getch();
}
