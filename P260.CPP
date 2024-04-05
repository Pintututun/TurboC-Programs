#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,i;
clrscr();
printf("Enter no. of tables");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
for(t=1;t<=n;t++)
{
printf("%d*%d=%d\t",t,i,t*i);
}
printf("\n");
}
getch();
}
