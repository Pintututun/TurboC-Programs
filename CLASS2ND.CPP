#include<stdio.h>
#include<conio.h>
void main()
{
long int a[100],i,max=0,j,sum,n;
clrscr();
start :
puts("Enter the size from 1 to 10");
scanf("%ld",&n);
if(n<10)
{
for(i=0;i<n;i++)
{
printf("Enter %ld number ",i+1);
scanf("%ld",&a[i]);
}
}
else goto start;
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]<a[j+1])
{
max=a[j];
a[j]=a[j+1];
a[j+1]=max;
}
}
}
sum=a[0]+a[n-1];
printf("\nMaximum element is %ld",a[0]);
printf("\nMinimum element is %ld",a[n-1]);
printf("\nSUM=%ld",sum);
getch();
}


