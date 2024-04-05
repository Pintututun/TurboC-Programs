#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
if(n%i==0)s+=i;
puts(n==s?"Perfect no":"Not a Perfect no");
getch();
}
