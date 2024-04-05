#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
puts("Enter the month number between 1-12");
scanf("%d",&m);
if(m==1||m==3||m==5||m==7||m==10||m==12)puts("31 days");
else if(m==2)puts("28/29 days");
else if(m==4||m==6||m==9||m=11)
puts("30 days");
else puts("Invalid month"):
getch();
}