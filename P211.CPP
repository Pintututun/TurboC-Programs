#include<stdio.h>
#include<conio.h>
void main()
{
int b,p;long int pwr=1;
clrscr();
printf("Enter base,power values");
scanf("%d%d",&b,&p);
while(p>=1)
{
pwr=pwr*b;
p--;
}
printf("Power = %ld",pwr);
getch();
}
