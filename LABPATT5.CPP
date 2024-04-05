#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a;
clrscr();
printf("Enter the number of rows");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
a=i;
a=a+n;
for(j=n;j>=i;j--)
{
printf("%4d",--a);
}
printf("\n");
}
getch();
}
