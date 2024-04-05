#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,c=0,cnt=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(c=0,j=1;j<=i;j++)if(i%j==0)c++;
if(c==2)printf("%4d",i,cnt++);
}
printf("\n%d primes",cnt);
getch();
}
