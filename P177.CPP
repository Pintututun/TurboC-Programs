#include<stdio.h>
#include<conio.h>
void main()
{
char ch='A';
char a[10]="Hyd",b[]="Hyd";
clrscr();
printf("%d,%d\n",sizeof(ch),sizeof("A"));
printf("%d,%d\n",sizeof("abc"),sizeof("abc")+1);
printf("%d,%d\n",sizeof(a),sizeof(b));
printf("%d\n",sizeof("Kishore Naidu"));
printf("%d\n",sizeof("Sudhakar\0Sharma"));
printf("%d\n",sizeof("Naresh\nIT"));
printf("%d\n",sizeof("1.23"));
printf("%d\n","Hi");
printf("%d\n",sizeof("Hi"+1));
getch();
}
