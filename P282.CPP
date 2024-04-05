#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c,a;
clrscr();
printf("Enter no of rows,cols");
scanf("%d %d",&nr,&nc);
for(r=1;r<=nr;r++)
{
a=64+nc;
for(c=1;c<=nc;c++)
{
if(r%2==0)printf("%2c",a--);
else printf("%2c",64+c);
}
printf("\n");
}
getch();
}
