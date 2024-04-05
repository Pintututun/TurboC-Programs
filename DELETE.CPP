#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[50],k,n,m;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d number",i+1);
scanf("%d",&a[i]);
}
printf("Enter the position to deleate-");
scanf("%d",&k);
m=k-1;
for(i=0;i<n;i++)
{
if(i!=m)
printf("%4d",a[i]);
}
getch();
}

