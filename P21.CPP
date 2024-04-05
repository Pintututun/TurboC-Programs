#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char gen;
clrscr();
printf("Enter person age--");
scanf("%d",&age);
flushall();
printf("Enter gender--");
scanf("%c",&gen);
if(gen=='m'||gen=='M'||gen=='f'||gen=='F')
{
if(age>=21||(gen=='f'||gen=='F')&&age>=18)
puts("Eligible");
else
puts("Not Eligible");
}
else
puts("Invalid gender");
getch();
}