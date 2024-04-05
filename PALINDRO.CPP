#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,rev,m,r,t=0;
clrscr();
printf("Enter the value-");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(m=i,rev=0;m!=0;m/=10)
{
r=m%10;
rev=rev*10+r;
}
if(rev==i)
{
printf("%4d",rev);
t=t+1;
}
}
printf("\n%d is the number of palindromes",t);
getch();
}