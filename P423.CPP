#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,temp,n;
clrscr();
printf("Enter the size from 1-50-");
scanf("%d",&n);
printf("Enter %d numbers ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
if(n%2!=0)n--;
for(i=0;i<n;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
puts("Elements after twisting array elements-");
for(i=0;i<=n;i++)
printf("%4d",a[i]);
getch();
}

