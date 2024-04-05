#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,temp,n;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d number",i+1);
scanf("%d",&a[i]);
}
puts("Array in ascending order--");
for(i=0;i<n;i++)
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
for(i=0;i<n;i++)
{
printf("%4d",a[i]);
}
getch();
}

