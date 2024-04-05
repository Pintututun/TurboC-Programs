#include<stdio.h>
#include<conio.h>
void main()
{
long n;int r;
clrscr();
printf("Enter the no ");
scanf("%ld",&n);
if(n<0)printf("-",n=-n);
do
{
printf("%ld",n%10);
n=n/10;
}while(n!=0);
getch();
}
