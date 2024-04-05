#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=n;r>=1;r--)
{
for(c=1;c<=r;c++)
{
printf("%3d",c);
}
printf("\n");
}
getch();
}
