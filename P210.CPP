#include<stdio.h>
#include<conio.h>
void main()
{
int n;long int f=1;
clrscr();
printf("Enter n value");
scanf("%d",&n);
while(n>1)
{
f=f*n;
n--;
}
printf("Factorial = %ld", f);
getch();
}
