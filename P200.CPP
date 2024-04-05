#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,s=0,n;
clrscr();
printf("Enter n value");
scanf("%d",&n);
while(i<=n)
{
s=s+i;
i++;
}
printf("Sum=%d,Avg=%.2f",s,(float)s/n);
getch();
}
