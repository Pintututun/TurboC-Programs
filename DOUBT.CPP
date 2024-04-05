#include<stdio.h>
#include<conio.h>
void main()
{
int a=40000;
unsigned int b=100000;
clrscr();
printf("%d,%d,%d\n",sizeof(-32767),sizeof(5),sizeof(32767));
printf("%d,%d,%d\n",sizeof(a),sizeof(40000),sizeof(132767));
printf("%d,%d\n",sizeof(40000u),sizeof((unsigned)40000));
printf("%d,%d\n",sizeof(5l), sizeof(5L));
printf("%d,%d\n",sizeof(5f), sizeof((float)5));
printf("%d,%d\n",sizeof((int)5.5),sizeof((long)5.5));
printf("%d,%d\n",sizeof((unsigned)100000),sizeof(100000u));
printf("b=%u",b);
getch();
}
