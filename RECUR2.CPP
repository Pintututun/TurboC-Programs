#include<stdio.h>
#include<conio.h>
int i=0,sum=0,t;
int array(int ele[],int n)
{
if(i<n)
{
printf("%4d",ele[i]);
++i;
array(ele,n);
}
return 0;
}
void main()
{
int m,a[50],j;
clrscr();
printf("Enter the size from 1-50");
scanf("%d",&m);
printf("Enter %d numbers--",m);
for(j=0;j<m;j++)scanf("%d",&a[i]);
array(a,m);
getch();
}

