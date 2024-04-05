#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
clrscr();
printf("Enter the number of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=64+i;j>=65;j--)
{
printf("%c ",j);
}
printf("\n");
}
getch();
}
