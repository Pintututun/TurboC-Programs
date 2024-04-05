#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b;
float d;
puts("Enter the dividednd");
scanf("%d",&a);
puts("Enter the divisor");
scanf("%d",&b);
d=fmod(a,b);
printf("The value is=%.2f",d);
getch();
}