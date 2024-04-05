#include<stdio.h>
#include<conio.h>
void main()
{
long n;int s=0;
clrscr();
printf("Enter the no--");
scanf("%ld",&n);
while(n>9||n<-9)
{
for(s=0;n!=0;n/=10)s=s+n%10;
n=s;
}
printf("Generic root=%d",n);
getch();
}