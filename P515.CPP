#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,b[50]={0},n,c;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers--",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(c=1,j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c++;
b[j]=-1;
}
}
if(b[i]!=-1)b[i]=c;
}
puts("Duplicate elements--");
for(i=0;i<n;i++)
{
if(b[i]>1)
printf("%4d",a[i]);
}
getch();
}


