#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=n+64;r>=65;r--)
{
for(c=r;c>=65;c--)printf("%2c",c);
printf("\n");
}
getch();
}