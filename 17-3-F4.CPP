#include<stdio.h>
#include<conio.h>
void prime(int n)
{
int i,c=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)c++;
if(c==1)break;
}
puts((c==1)?"COMPOSITE NUMBER":"PRIME NUMBER");
}
void main()
{
int m;
clrscr();
printf("Enter a number--");
scanf("%d",&m);
prime(m);
getch();
}