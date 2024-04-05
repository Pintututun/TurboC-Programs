#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int n,r,c,s;
clrscr();
printf("Emter no of rows");
scanf("%d",&n);
while(!kbhit())
{
for(r=1;r<=n;r++)
{
textcolor(random(16));
for(s=1;s<=n-r;s++)cprintf(" ");
for(c=1;c<=2*r-1;c++)cprintf("*");
printf("\n");
}
}
}
