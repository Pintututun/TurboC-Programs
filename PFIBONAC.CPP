#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f1=0,f2=1,f3;
clrscr();
printf("Enter the no ");
scanf("%d",&n);
printf("%d Fibonacci series ",n);
for(i=1;i<=n;i++)
{
printf("%3d",f1);
f3=f1+f2;
f1=f2;
f2=f3;
}
getch();
}
