#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,temp;
clrscr();
printf("Enter the size from 1-50 -");
scanf("%d",&n);
flushall();
printf("Enter %d numbers--",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-2;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
puts("-------------------------------------------");
printf("FIRST MAXIMUM NUMBER IS-%d\n",a[n-1]);
printf("SECOND MAXIMUM NUMBER IS-%d\n",a[n-2]);
printf("THIRD MAXIMUM NUMBER IS-%d",a[n-3]);
getch();
}

