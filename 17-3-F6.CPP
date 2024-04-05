#include<stdio.h>
#include<conio.h>
void largest(int a[],int n)
{
int temp,i,j;
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("LARGEST VALUE---%d",a[n-1]);
}
void main()
{
int k,b[50],m;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&m);
printf("Enter %d elements--",m);
for(k=0;k<m;k++)scanf("%d",&b[k]);
largest(b,m);
getch();
}