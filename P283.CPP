#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c,a=65;
clrscr();
printf("Enter no of rows,cols");
scanf("%d %d",&nr,&nc);
for(r=1;r<=nr;r++)
{
for(c=1;c<=nc;c++)
{
if(r%2==0)printf("%2c",--a);
else printf("%2c",a++);
}
printf("\n");
}
getch();
}
