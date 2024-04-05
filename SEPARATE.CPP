#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,temp,n;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
puts("TAKE ANY NUMBER EITHER POSITIVE NUMBER OR NEGATIVE NUMBER ");
for(i=0;i<n;i++)
{
printf("Enter %d number-",i+1);
scanf("%d",&a[i]);
}
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
puts("NEGATIVE NUMBERS AND POSITIVE NUMBERS ARE SEPARATED");
for(i=0;i<n;i++)
{
printf("%4d",a[i]);
}
getch();
}
