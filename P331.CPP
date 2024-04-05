#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,s;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=n;r>=1;r--)
{
for(s=1;s<r;s++)printf("   ");
for(c=r;c<=n;c++)printf("%3d",c);
for(c=n-1;c>=r;c--)printf("%3d",c);
printf("\n");
}
getch();
}
