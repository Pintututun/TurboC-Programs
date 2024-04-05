#include<stdio.h>
#include<conio.h>
void main()
{
long n;int r,e,o,z;
e=o=z=0;
clrscr();
printf("Enter the number");
scanf("%ld",&n);
do
{
r=n%10;
if(r==0)z++;
else if(r%2==0)e++;
else o++;
n=n/10;
}while(n!=0);
printf("Even=%d,Odd=%d,Zero=%d",e,o,z);
getch();
}
