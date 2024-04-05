#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,i,r,s=0;
clrscr();
start:
printf("Enter a no");
scanf("%d",&n);
for(i=0;n!=0;n=n/10,i++)
{
r=n%10;
if(r==0||r==1)s=s+r*pow(2,i);
else {puts("Invalid binary code");goto start;}
}
printf("Decimal code=%d",s);
getch();
}
