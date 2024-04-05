#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int b=2,p=5;
clrscr();
printf("%d^%d=%f\n",b,p,pow(b,p));
printf("%d^%d=%.0f\n",b,p,pow(b,p));
printf("%d^%d=%d\n",b,p,(int)pow(b,p));
getch();
}
