#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,m,c=0,r,s=0,t=0,i;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=0;
s=0;
for(m=i;m!=0;m/=10)c++;
for(m=i;m!=0;m/=10){r=m%10;s+=pow(r,c);}
if(i==s)
{
printf("%d ",i);
t=t+1;
}
}
printf("\n%dis number of Armstrong numbers",t);
getch();
}
