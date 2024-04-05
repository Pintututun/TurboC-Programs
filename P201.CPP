#include<stdio.h>
#include<conio.h>
void main()
{
int s,n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
s=n*(n+1)/2;
printf("Sum=%d,Avg=%.2f",s,(float)s/n);
getch();
}
