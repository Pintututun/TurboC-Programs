#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],*p,sum=0,n,i;
clrscr();
p=a;
printf("Enter the size of array--");
scanf("%d",&n);
printf("Enter the elements--");
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n;i++,p++)
{
sum=sum+(*p);
}
printf("SUM =%d",sum);
getch();
}


