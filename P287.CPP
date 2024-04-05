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
if(c<=r)printf("%3d",r);
else printf("%3d",1);
}
printf("\n");
}
getch();
}
