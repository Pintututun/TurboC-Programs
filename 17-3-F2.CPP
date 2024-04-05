#include<stdio.h>
#include<conio.h>
void series(int n)
{
float sum=0.0,f=1.0;
int i,j;
for(i=1;i<=n;i++)
{
for(f=1.0,j=1;j<=i;j++)
{
f=f*j;
}
sum=sum+(f/i);
printf("%d!/%d+",i,i);
}
printf("\b=%f",sum);
}
void main()
{
int m;
clrscr();
printf("Enter a number--");
scanf("%d",&m);
puts("SERIES--");
series(m);
getch();
}