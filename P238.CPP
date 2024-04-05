#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Enter a no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i<n)printf("%d+",i);else printf("%d",i);
s+=i;
}
printf("=%d",s);
getch();
}
