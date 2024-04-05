#include<stdio.h>
#include<conio.h>
void main()
{
int a[25],b[25],i,j,*p,e,n,m,k;
p=a;
clrscr();
printf("Enter the size of 1st array from 1-25--");
scanf("%d",&n);
printf("Enter the size of 2nd array from 1-25--");
scanf("%d",&m);
printf("Enter %d elements--",n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("Enter %d elements--",m);
for(j=0;j<m;j++)scanf("%d",&b[j]);
for(k=i,e=0;k<=(n+m-1);k++,e++)p[k]=b[e];
puts("NEW ARRAY AFTER USING POINTER");
for(i=0;i<k;i++)printf("%4d",p[i]);
getch();
}


