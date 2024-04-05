#include<stdio.h>
#include<conio.h>
void largest(int a[],int n)
{
int i,j;
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

