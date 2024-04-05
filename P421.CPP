#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,i,j,temp;
clrscr();
printf("Enter array size from 1-50-");
scanf("%d",&n);
printf("Enter %d Integers ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<=n-2;i++)
{
for(j=0;j<=n-i-1;j++)
{
if(a[j]<a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Soerted elements- ");
for(i=0;i<n;i++)
printf("%4d",a[i]);
getch();
}
