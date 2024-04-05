#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,max,min,temp;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter position for maximum and minimum--");
scanf("%d %d",&max,&min);
for(i=0;i<=n-2;i++)
{
for(j=i+1;j<=n-1;j++)
{
if(a[i]>
a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
if((min-1)==i)printf("Minimum element--%d",a[i]);
}
for(i=n-1;i>=0;i--)
{
if(max==i)
printf("Maximum element--%d",a[i]);
}
getch();
}

