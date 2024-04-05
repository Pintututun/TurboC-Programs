#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,a,b;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
a=r;
b=n-1;
for(c=1;c<=r;c++)
{
printf("%3d",a);
a=a+b;
b--;
}
printf("\n");
}
getch();
}
