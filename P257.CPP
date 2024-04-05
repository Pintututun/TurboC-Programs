#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,max,i;
clrscr();
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
max=n1>n2?n1:n2;
for(;max;)
{
if(max%n1==0 && max%n2==0)
{
printf("LCM=%d",max);break;
}
max++;
}
getch();
}
