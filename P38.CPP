#include<stdio.h>
#include<conio.h>
void main()
{
int id;
char name[20];
float qty,price,amount,disc,tot;
clrscr();
puts("Enter consumer id,name,quantity purchased and rate of item ");
scanf("%d %s %f %f",&id,name,&qty,&price);
amount=qty*price;
disc=amount*35/100;
tot=amount-disc;
printf("Amount=%.2f,Disc=%.2f,Tot=%.2f",amount,disc,tot);
getch();
}