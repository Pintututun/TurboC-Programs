#include<stdio.h>
#include<conio.h>
int sum=0;
int digit(int n)
{
if(n!=0)
{
sum=sum+n%10;
digit(n/10);
}
return sum;
}
void main()
{
int n;
clrscr();
printf("Enter a number--");
scanf("%d",&n);
printf("Sum=%d",digit(n));
getch();
}