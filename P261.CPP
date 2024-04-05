#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,r,rev,c=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(rev=0,j=i;j!=0;j/=10)
{
r=j%10;
rev=rev*10+r;
}
if(i==rev)printf("%4d",i,c++);
}
printf("\n%d Palindromes",c);
getch();
}
