#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c,a=1,b;
clrscr();
printf("Enter no of roes");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
b=a+r-1;
for(c=1;c<=r;c++,a++)
{
if(r%2==0)printf("%3d",b--);
else printf("%3d",a);
}
printf("\n");
}
getch();
}
