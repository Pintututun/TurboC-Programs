#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j;
clrscr();
printf("Enter the size of array-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%d",a[i]);
for(i=0;i<n-1;i++)
{
for(j=a[i];j<a[i+1];j++)
{
if(a[i]!=j)
