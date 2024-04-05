#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,temp;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
puts("Multiple Missing elements---");
for(i=0;i<n-1;i++)
{
for(j=a[i];j<a[i+1];j++)
{
if(a[i]!=j)
{
printf("%4d",j);
}
}
}
getch();
}