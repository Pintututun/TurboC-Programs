#include<stdio.h>
#include<conio.h>
void main()
{
long int a[10],i,odd=0,even=0,n;
clrscr();
start :
printf("Enter the size from 1-10-");
scanf("%ld",&n);
if(n<10)
{
for(i=0;i<n;i++)
{
printf("Enter %ld number",i+1);
scanf("%ld",&a[i]);
if(a[i]%2==0)
{
even=even+a[i];
}
else
{
odd=odd+a[i];
}
}
}
else goto start;
gotoxy(50,20);
printf("Sum of even numbers=%ld",even);
gotoxy(50,20);
printf("\nSum of odd numbers=%ld",odd);
getch();
}

