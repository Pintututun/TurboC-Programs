#include<stdio.h>
#include<conio.h>
void main()
{
int d;
clrscr();
printf("Enter week day no 1-7--");
scanf("%d",&d);
switch(d)
{
case 1:puts("Sunday");break;
case 2:puts("Monday");break;
case 3:puts("Tuesday");break;
case 4:puts("Wednesday");break;
case 5:puts("Thursday");break;
case 6:puts("Friday");break;
case 7:puts("Saturday");break;
default:puts("Invalid day no");
}
getch();
}