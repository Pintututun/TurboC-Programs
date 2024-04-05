#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
clrscr();
printf("Enter no of rows");
scanf("%d",&n);
for(r=n;r>=1;r--)
{
for(c=r;c>=1;c--)printf("%2c",c+64);
printf("\n");
}
getch();
}
