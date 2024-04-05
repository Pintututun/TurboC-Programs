#include<stdio.h>
#include<conio.h>
void main()
{
float a[50],i;
float median;
int n;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%f",&a[i]);
if(n%2==0)median=(a[n/2]+a[(n-1)/2])/2;
else median=a[(n-1)/2];
printf("Median=%f",median);
getch();
}
