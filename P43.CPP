#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
goto a;
c:
puts("Hyd");
goto last;
b:
puts("Ameerpet");
goto c;
a:
puts("Naresh IT");
goto b;
last:
getch();
}