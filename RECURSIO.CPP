#include<stdio.h>
#include<conio.h>
int sum=0;
int sumofnatural(int n)
{
if(n>=1){sum=sum+n;
--n;
sumofnatural(n);}
return sum;
}
void main()
{
int n;
clrscr();
printf("Enter a number--");
scanf("%d",&n);
printf("%d",sumofnatural(n));
getch();
}
