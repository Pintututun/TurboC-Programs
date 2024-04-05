#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,k=10;clrscr();
k+=(x=5,y=x+2,z=x+y);
printf("x=%d,y=%d,z=%d,k=%d\n",x,y,z,k);
getch();
}