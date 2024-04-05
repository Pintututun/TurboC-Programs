#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,t,n;
clrscr();
printf("Enter the no of rows");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=(n-i);j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",k);
}
if(i>1)
{
for(t=(i-1);t>=1;t--)
{
printf("%d",t);
}
}
printf("\n");
}
getch();
}
