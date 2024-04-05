#include<stdio.h>
#include<conio.h>
void swap(int n1,int n2)
{
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("AFTER SWAPING--");
printf("%d  %d",n1,n2);
}
void main()
{
int m,k;
clrscr();
printf("Enter 1st number--");
scanf("%d",&m);
printf("Enter 2nd number--");
scanf("%d",&k);
printf("BEFORE SWAPING--%d %d\n",m,k);
swap(m,k);
getch();
}