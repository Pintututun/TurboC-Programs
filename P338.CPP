#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=10;r++)
{
if(r%5==0)continue;
for(c=1;c<=10;c++)
{
if(c>r)break;
printf("%4d",c);
}
printf("\n");
}
getch();
}
