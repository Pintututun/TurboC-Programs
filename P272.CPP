#include<stdio.h>
#include<conio.h>
void main()
{
long int a,n,m,r,f,s;
clrscr();
printf("Enter any no.");
scanf("%ld",&a);
for(n=1;n<=a;n++)
{
for(s=0,m=n;m!=0;m/=10)
{
for(f=1,r=m%10;r>1;r--)f=f*r;
s+=f;
}
if(n==s)printf("%8ld",n);
}
getch();
}

