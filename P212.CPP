#include<stdio.h>
#include<conio.h>
void main()
{
int b,p,t; long int pwr=1,s=0;
clrscr();
printf("Enter base, power values");
scanf("%d%d",&b,&p);
while(p>=1)
{
pwr=pwr*b;
s+=pwr;
p--;
}
printf("Power sum=%ld",s);
getch();
}
