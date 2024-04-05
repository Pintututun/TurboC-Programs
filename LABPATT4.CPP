#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,n;
clrscr();
printf("Enter the number of rows");
scanf("%d",&n);
a=n*(n+1)/2;
for(i=n;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%2d",a);
a--;
}
printf("\n");
}
getch();
}
