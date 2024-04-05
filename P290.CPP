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
for(c=1;c<=r;c++)
{
if((c+r)%2==0)printf("$ ");
else printf("* ");
}
printf("\n");
}
getch();
}
