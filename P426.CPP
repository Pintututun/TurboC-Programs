#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,e=1,o=1;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers-",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)o=0;
if(a[i]%2!=0)e=0;
}
if(e==1)printf("Even array");
else if(o==1)printf("Odd array");
else printf("Mixed array");
getch();
}

