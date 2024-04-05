#include<stdio.h>
#include<conio.h>
void main()
{
long n,i,c=0;
clrscr();
printf("Enter the no");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)c++;
if(c==3)break;
}
puts(c==2?"Prime":"Composite");
getch();
}
