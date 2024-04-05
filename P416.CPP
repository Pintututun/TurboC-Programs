#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,temp,n;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
start :
if(n<50)
{
for(i=0;i<n;i++)
{
printf("Enter the %d element:",i+1);
scanf("%d",&a[i]);
}
}
else goto start;
for(i=0;i<n;i++)
{
for(j=i+1;j<(n-1);j++)
{
if(a[i]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Maximum element is %d",a[n-1]);
printf("\nMinimum element is %d",a[0]);
getch();
}
