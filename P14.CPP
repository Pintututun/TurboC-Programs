#include<stdio.h>
#include<conio.h>
float amt=0;
void main()
{
int op,qty;
float price;
start:
clrscr();
puts("************************************************************************");
puts("\t\t\t HOTEL ABC");
puts("\t\t\t1.TEA");
puts("\t\t\t2.COOFEE");
puts("\t\t\t3.IDLY");
puts("\t\t\t5.WADA");
puts("\t\t\t6.POORI");
puts("\t\t\t7.BILL");
puts("\t\t\t8.EXIT");
puts("*************************************************************************");
printf("\t\t\tEnter your option[ ]\b\b");
scanf("%d",&op);
switch(op)
{
case 1:price=10;puts("PRICE-10");
       printf("Enter no. of items-");
       scanf("%d",&qty);break;
case 2:price=20;
       puts("PRICE-20");
       printf("Enter no.of items-");
       scanf("%d",&qty);break;
case 3:price=30;
       puts("PRICE-30");
       printf("Enter no. of items-");
       scanf("%d",&qty);break;
case 4:price=35;
       puts("PRICE-35");
       printf("Enter no. of items-");
       scanf("%d",&qty);break;
case 5:price=40;
       puts("PRICE-40");
       printf("Enter no. of items-");
       scanf("%d",&qty);break;
case 6:price=45;
       puts("PRICE-45");
       printf("Enter no. of items");
       scanf("%d",&qty);break;
case 7:printf("Amount=%.2f",amt);
       amt=0;qty=0;getch();break;
case 8:return;
}
amt=amt+qty*price;
goto start;
}