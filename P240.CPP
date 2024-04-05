#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d%c+",i,253);
s+=i*i;
}
printf("\b=%d",s);
getch();
}
