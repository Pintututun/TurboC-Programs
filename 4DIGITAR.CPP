#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,m,k,c=0,g=0,t;
clrscr();
printf("Enter a number");
scanf("%d",&n);
for(m=n;m!=0;m/=10)c++;
for(k=n;k!=0;k/=10)
{
t=k%10;
g=g+pow(t,c);
}
if(n==g)printf("ARMSTRONG NUMBER");
else printf("NOT ARMSTRONG NUMBER");
getch();
}
