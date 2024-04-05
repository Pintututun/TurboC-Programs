#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
clrscr();
start :
printf("Enter the size from 1-10-");
scanf("%d",&n);
if(n<10)
{
for(i=0;i<n;i++)
{
printf("Enter the %d number",i+1);
scanf("%d",&a[i]);
}
}
else goto start;
puts("-------------------------------REVERSE ORDER-------------------------");
for(i=(n-1);i>=0;i--)
{
printf("%4d",a[i]);
}
getch();
}
