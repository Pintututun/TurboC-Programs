#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,f=1,r,s=0;
clrscr();
printf("Enter the value to be checked-");
scanf("%d",&n);
for(m=n;m!=0;m/=10)
{
for(f=1,r=m%10;r>1;r--)
{
f=f*r;
}
s+=f;
}
puts(s==n?"Strong no.":"Not Strong no.");
getch();
}
