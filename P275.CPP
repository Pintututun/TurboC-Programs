#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c;
clrscr();
printf("Enter no.of rows and columns ");
scanf("%d %d",&nr,&nc);
for(r=1;r<=nr;r++)
{
for(c=1;c<=nc;c++)
{
printf("%3d",r+c-1);
}
printf("\n");
}
getch();
}














