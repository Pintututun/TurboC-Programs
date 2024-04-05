#include<stdio.h>
#include<conio.h>
void insert(int *p,int *n)
{
int ele,in,k,i;
printf("Enter the element to insert-");
scanf("%d",&ele);
printf("Enter the position to insert--");
scanf("%d",&in);
for(k=*n;k>=in;k--)
{
p[k]=p[k-1];
}
p[in-1]=ele;
for(i=0;i<=(*n);i++)printf("%4d",p[i]);
}
void main()
{
int a[50],n,i;
clrscr();
printf("Enter the size from 1-50--");
scanf("%d",&n);
printf("Enter %d elements--",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
insert(a,&n);
getch();
}