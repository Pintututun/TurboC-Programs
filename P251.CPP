#include<stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,c=0,i;
clrscr();
printf("Enter the no");
scanf("%d",&n);
for(i=1;i<=n;i++)if(n%i==0)c++;
if(c==2)
{
for(c=0;n!=0;n/=10)rev=rev*10+(n%10);
for(i=1;i<=rev;i++)if(rev%i==0)c++;
puts(c==2?"Twisted Prime":"Not a Twisted Prime");
}
else puts("Given no is composite no");
getch();
}