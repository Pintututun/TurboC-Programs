#include<stdio.h>
#include<conio.h>
void binary(int n)
{
int a[16]={0},i,m;
for(m=n,i=0;m!=0;m/=2,i++)
{
a[i]=(m%2);
}
a[i]=0;
puts("BINARY VALUE---");
for(;i>=0;i--)
printf("%4d",a[i]);
}
void main()
{
int k;
clrscr();
printf("Enter the decimal number--");
scanf("%d",&k);
binary(k);
getch();
}

