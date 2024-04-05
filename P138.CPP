#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
clrscr();
a<<2+1>>2;
printf("a=%d\n",a);
a=a<<2+1>>2;
printf("a=%d\n",a);
printf("a=%d\n",a<<2+1>>2);
printf("a=%d\n",a);
printf("a=%d\n",a=a<<2+1>>2);
printf("a=%d",a);
getch();
}
