#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,m,n;
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers--",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter next how elements to insert--");
scanf("%d",&m);
n=n+m;
for(j=i;j<n;j++)scanf("%d",&a[i]);
for(i=0;i<n;i++)printf("%4d",a[i]);
getch();
}
