#include<stdio.h>
#include<conio.h>
void main()
{
int i=2,n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
while(i<=n)
{
printf("%-4d",i);
i=i+2;
}
getch();
}
