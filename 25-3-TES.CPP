#include<stdio.h>
#include<conio.h>
struct stu
{
int age;
char name[20];
int id;
}p[3];
void main()
{
struct stu p[3];
int i;
clrscr();
for(i=0;i<3;i++)
{
printf("Enter %d name of student--",i+1);
gets(p[i].name);
printf("Enter His Age and Id--");
scanf("%d %d",&p[i].age,&p[i].id);
flushall();
}
puts("NAME\t\tAGE\tid");
for(i=0;i<3;i++)
{
printf("%-10s",p[i].name);
printf("%9d",p[i].age);
printf("%9d",p[i].id);
printf("\n");
}
getch();
}


