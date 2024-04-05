#include<stdio.h>
#include<conio.h>
void main()
{
float a=1.2;
clrscr();
printf("%d, %d\n",sizeof(a),sizeof(1.2));
printf("%d,%d\n",sizeof(1.2f),sizeof((float)1.2));
printf("%d,%d\n",sizeof((int)1.2),sizeof(1.2l));
printf("%d,%d\n",sizeof((long)1.2),sizeof(1.2L));
printf("%d,%d\n",sizeof((long double)1.2),sizeof(1.2L));
getch();
}
