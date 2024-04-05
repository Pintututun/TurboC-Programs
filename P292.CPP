#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,a;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
a=n*(n+1)/2;
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
printf("%3d",a--);
}
printf("\n");
}
getch();
}
