#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,t,temp,max,min;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter the position for maximum-");
scanf("%d",&max);
printf("Enter the position for minimum--");
scanf("%d",&min);
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)            i
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if(i==min)printf("Minimun=%d",a[i]);
t=n-i-1;
if(t==max)printf("Maximum=%d",a[i]);
}
getch();
}}
