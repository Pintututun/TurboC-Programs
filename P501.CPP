#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,t,s=0;
clrscr();
printf("Enter the size of array--");
scanf("%d",&n);
printf("Enter %d numbers--",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(a[i]!=-1)
{
if(a[i]==a[j])
{
a[j]=-1;
t=a[i];
}
}
}
if(t==a[i])
{
a[i]=-1;
}
}
for(i=0;i<n;i++)
{
if(a[i]!=-1)s=s+a[i];
}
printf("SUM=%d",s);
getch();
}