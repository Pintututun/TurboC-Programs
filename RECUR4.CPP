#include<stdio.h>
#include<conio.h>
int t;
int gcd(int n1,int n2)
{
if(t%n1==0&&n2%n1==0)
{
--n1;
gcd(n1,n2);
}
return n1;
}
void main()
{
int n1,n2,m;
clrscr();
printf("Enter two integers--");
scanf("%d %d",&n1,&n2);
if(n1<n2)
{
t=n1;
m=n2;
}
else
{
t=n2;
m=n1;
}
printf("GCD=%d",gcd(t,m));
getch();
}

