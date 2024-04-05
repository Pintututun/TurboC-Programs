#include<stdio.h>
#include<conio.h>
void main()
{
long n; int c=0;
clrscr();
printf("Enter n value");
scanf("%ld",&n);
do
{
c++;
n=n/10;
}while(n!=0);
printf("No of digits=%d",c);
getch();
}
