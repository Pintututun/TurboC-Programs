#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
clrscr();
printf("Enter no of rows ");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
char ch='A';
for(c=1;c<=r;c++)printf("%2c",ch++);
printf("\n");
}
for(r=n-1;r>=1;r--)
{
char ch='A';
for(c=1;c<=r;c++)printf("%2c",ch++);
printf("\n");
}
getch();
}
