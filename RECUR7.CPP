#include<stdio.h>
#include<conio.h>
int evenodd(int n,int a)
{
if(a<=n)
{
printf("%4d",a);
a+=2;
evenodd(n,a);
}
return 0;
}
void main()
{
int n;
clrscr();
printf("Enter a number--");
scanf("%d",&n);
printf("Even--");
evenodd(n,2);
printf("\nOdd--");
evenodd(n,1);
getch();
}
