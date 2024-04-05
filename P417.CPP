#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],c[100],i,n,e=0,o=0,j;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the %d element:",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
b[e]=a[i];
e++;
}
else
{
c[o]=a[i];
o++;
}
}
puts("Even elements");
puts("-------------");
for(i=0;i<e;i++)
{
printf("%d\n",b[i]);
}
puts("Odd elements");
puts("-------------");
for(j=0;j<o;j++)
{
printf("%d\n",c[j]);
}
getch();
}




