#include<stdio.h>
#include<conio.h>
void main()
{
int pin,count=0;
clrscr();
start:
printf("Enter pin number--");
scanf("%4d",&pin);
if(pin==1111)puts("Welcome to HDFC Bank ATM");
else
{
count++;
if(count==3)puts("Ur card is blocked for 24 Hours ");
else
{
puts("Invalid PIN");
goto start;
}
}
getch();
}