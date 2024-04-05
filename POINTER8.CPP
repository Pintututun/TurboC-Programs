#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,*p,a[50];
clrscr();
p=a;
printf("Enter the size of array");
scanf("%d",&n);
printf("Enter the %d numbers",n);
for(i=0;i<n;i++)scanf("%d",&p[i]);
for(i--;i>=0;i--)printf("%4d",p[i]);
getch();
}


