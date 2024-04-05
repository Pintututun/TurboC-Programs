#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,c=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
if(n==1)
{
puts("1 is neither prime nor composite");
}
else
{
for(i=1;i<=n;i++)if(n%i==0)c++;
puts(c==2?"Prime no":"Composite no");
}
getch();
}

