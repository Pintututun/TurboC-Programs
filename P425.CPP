#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,pos;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter the position to deleate-");
scanf("%d",&pos);
for(n--,i=pos-1;i<n;i++)
a[i]=a[i+1];
for(i=0;i<n;i++)
printf("%4d",a[i]);
getch();
}
