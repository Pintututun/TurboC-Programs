#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int b,p,s=0;
clrscr();
printf("Enter base value and power value");
scanf("%d%d",&b,&p);
while(p>=1)
{
s+=pow(b,p);
p--;
}
printf("Sum of power=%d",s);
getch();
}

