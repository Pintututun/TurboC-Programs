#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c;
char U='A',L='a';
clrscr();
printf("Enter no of rows,cols");
scanf("%d %d",&nr,&nc);
for(r=1;r<=nr;r++)
{
for(c=1;c<=nc;c++)
{
if(r%2==0)
printf("%2c",L);
else printf("%2c",U);
}
printf("\n");
if(r%2==0)L++;
else U++;
}
getch();
}
