#include<stdio.h>
#include<conio.h>
void main()
{
int age;
char gen;
clrscr();
printf("Enter person age-");
scanf("%d",&age);
flushall();
printf("Enter gender-");
scanf("%c",&gen);

if(age>=21||(gen=='f'||gen=='F')&&age>=18)
printf("Eligible");
else printf("Not Eligible");
getch();
}