#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0){printf("%d+",i);s-=i;}
else {printf("%d-",i);s+=i;}
}
printf("\b=%d",s);
getch();
}
