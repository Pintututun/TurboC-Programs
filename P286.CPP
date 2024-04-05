#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=n;c++)
{
if(c<=n-r)printf("1 ");
else printf("%d ",r);
}
printf("\n");
}
getch();
}
