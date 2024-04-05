#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,c=0,cnt=0;
clrscr();
printf("Enter the value-");
scanf("%d",&n);
if(n==1)
printf("%d is neither Prime nor Composite");
else
{
for(i=2;i<=n;i++)
{
for(c=0,j=1;j<=i;j++)
if(i%j==0)c++;
if(c==2)printf("%4d",i,cnt++);
}
}
printf("\n%dis number of prime numbers",cnt);
getch();
}