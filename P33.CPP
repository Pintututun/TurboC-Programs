#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char gen;
clrscr();
printf("Enter person age--");
scanf("%d",&age);
printf("Enter person gender--");flushall();
scanf("%c",&gen);
if(age>=21||(gen=='f'||gen=='F')&&age>=18)puts("Eligible");
else puts("Not Eligible");
getch();
}