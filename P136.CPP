#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
clrscr();
a<<=2;
printf("a=%d\n",a);
a>>=3;
printf("a=%d\n",a);
printf("a=%d\n",a<<=3);
printf("a=%d\n",a>>=1);
printf("a=%d",a);
getch();
}
