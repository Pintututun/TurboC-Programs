#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,j,temp,k;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
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
for(k=0;k<n;k++)printf("%4d",a[k]);
getch();
printf("\n");
}
for(i=0;i<n;i++)
printf("%4d",a[i]);
getch();
}


