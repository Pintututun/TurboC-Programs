#include<stdio.h>
#include<conio.h>
int a[16];
void main()
{
int i,j,n,m,r;
clrscr();
printf("Enter the number-");
scanf("%d",&n);
for(m=n,i=0;(m!=0)&&(i<16);m/=2,i++)
{
r=m%2;
a[i]=r;
}
puts("Binary value-");
for(i=15;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}





