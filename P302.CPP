#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,s;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(s=1;s<=n-r;s++)printf(" ");
for(c=1;c<=2*r-1;c++)printf("*");
printf("\n");
}
getch();
}
