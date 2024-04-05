#include<stdio.h>
#include<conio.h>
void main()
{
int nr,nc,r,c;
clrscr();
printf("Enter no of rows,cols");
scanf("%d %d",&nr,&nc);
for(r=1;r<=nr;r++)
{
char U='A',L='a';
for(c=1;c<=nc;c++)
{
if(c%2==0)
printf("%2c",L++);
else printf("%2c",U++);
}
printf("\n");
}
getch();
}
