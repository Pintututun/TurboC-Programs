#include<stdio.h>
#include<conio.h>
void main()
{
int t,n1,n2,i,c=0,cnt=0;
clrscr();
printf("Enter starting and ending no's");
scanf("%d %d",&n1,&n2);
if(n1>n2)
{
t=n1;
n1=n2;
n2=t;
}
for( ;n1<=n2;n1++)
{
for(c=0,i=1;i<=n1;i++)
{
if(n1%i==0)
{
c++;if(c==3)break;
}
}
if(c==2)printf("%4d",n1,cnt++);
}
printf("\n%d is the number of prime numbers",cnt);
getch();
}

