#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("%d\n",123);
printf("%5d\n",123);
printf("%-5d\n",123);
printf("%1d\n",23);
printf("%-1d\n",23);
printf("%*d\n",5,123);
printf("%$d\n",5,123);
printf("%*d\n",-5,123);
printf("%-*d\n",5,123);
printf("%i\n",123);
printf("%I\n",123);
getch();
}
