#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,temp,miss,n;
clrscr();
printf("Enter the size of the array-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
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
printf("Missing elements----");
for(i=1;i<=n-1;i++)
{
if((a[i-1]+1)!=a[i])
{
miss=(a[i-1]+1);
printf("%4d",miss);
}
}
getch();
}


