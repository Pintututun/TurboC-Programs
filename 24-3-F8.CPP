#include<stdio.h>
#include<conio.h>
void perfect(int n)
{
int i,s,j;
for(i=1;i<=n;i++)
{
for(s=0,j=1;j<i;j++)
{
if(i%j==0)
{
s=s+j;
}
}
if(s==i)printf("%4d",i);
}
}
void main()
{
int n;
clrscr();
printf("Enter a number--");
scanf("%d",&n);
puts("Perfect Numbers----");
perfect(n);
getch();
}