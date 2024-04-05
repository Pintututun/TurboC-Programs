#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,s,a;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=0;r<n;r++)
{
for(s=1;s<n-r;s++)printf("  ");
for(c=0;c<=r;c++)
{
if(c==0||c==r)a=1;
else a=a*(r-c+1)/c;
printf("%4d",a);
}
printf("\n");
}
getch();
}
