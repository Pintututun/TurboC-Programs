#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
goto a;
c: puts("Hyd");
getch();
return;
b: puts("Ameerpet");
getch();goto c;
a: puts("Naresh IT");
getch();goto b;
}