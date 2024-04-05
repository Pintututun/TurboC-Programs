#include<stdio.h>
#include<conio.h>
#include<math.h>
void armstrong(int n)
{
int m,c=0,t=0,k,g;
for(m=n;m!=0;m/=10)c++;
for(k=n;k!=0;k/=10)
{
g=k%10;
t=t+pow(g,c);
}
puts((t==n)?"ARMSTRONG NUMBER":"NOT ARMSTRONG NUMBER");
}
void main()
{
int x;
clrscr();
printf("Enter a number--");
scanf("%d",&x);
armstrong(x);
getch();
}