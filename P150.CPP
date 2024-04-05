#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("%d\n",5>=5,6<=5);
printf("%d,%d\n",5>=5,6<=5);
printf("%d\n",5>=5&&6<=5);
printf("%d\n",5>=5||6<=5);
printf("%d\n",!(5>=5));
printf("%d\n",-5>=-6&&'a'!='b'&&9<9);
printf("%d\n",'a'==97||'b'>='A'&&'c'!='c');
printf("%d\n",('a'==97||'b'>='A')&&'c'!='c');
getch();
}


