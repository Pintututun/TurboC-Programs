#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the base value-");
scanf("%d",&a);
printf("Enter the power value-");
scanf("%d",&b);
c=pow(a,b);
printf("The value=%d",c);
getch();
}
