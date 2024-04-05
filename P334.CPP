#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
for(r=1;r<=10;r++)
{
if(r%2!=0)continue;
printf("%d\n",r);
}
getch();
}
