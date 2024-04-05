#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,r,c,e=2,o=1;
clrscr();
printf("Enter no of rows ");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if(r%2==0)
{
printf("%3d",e);
e+=2;
}
else
{
printf("%3d",o);
o+=2;
}
}
printf("\n");
}
getch();
}
