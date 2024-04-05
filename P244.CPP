#include<stdio.h>
#include<conio.h>
void main()
{
long n,i,p=1;
clrscr();
printf("Enter the no");
scanf("%ld",&n);
if(n<=1)p=0;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
p=0;
break;
}
}
puts(p==1?"prime":"Composite");
getch();
}
