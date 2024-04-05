#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
char ch='A';
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if(c==1||c==r||n==r)
printf("*");
else printf("%c",ch++);
if(ch>'Z')ch='A';
}
printf("\n");
}
getch();
}
