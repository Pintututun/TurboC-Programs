#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,b[50],c=0;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
b[c]=a[i];
}
}
c++;
}
puts("Duplicate elements---");
for(i=0;i<=c;i++)printf("%4d",b[i]);
getch();
}
