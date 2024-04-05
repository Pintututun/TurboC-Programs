#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,b[50],c=0,n;
clrscr();
start :
printf("Enter the size from 1-50-");
scanf("%d",&n);
if(n<50)
{
for(i=0;i<n;i++)
{
printf("Enter the %d number-",i+1);
scanf("%d",a[i]);
}
}
else goto start;
for(i=0;i<n;i++)
{
for(c=0,j=0;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
printf("%d==%d\n",a[i],c);
}
getch();
}

