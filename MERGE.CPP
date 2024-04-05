#include<stdio.h>
#include<conio.h>
void main()
{
long int a[50],b[50],c[100],i,j,k=0,m,n,temp=0;
clrscr();
start :
printf("Enter the size of 1st array from 1-50-");
scanf("%ld",&n);
printf("Enter the size of 2nd array from 1-50-");
scanf("%ld",&m);
if(n<50&&m<50)
{
puts("Enter the elements of 1st array-");
for(i=0;i<n;i++)
{
printf("Enter the %ld element-",i+1);
scanf("%ld",&a[i]);
}
puts("Enter the elements of 2nd array-");
for(j=0;j<m;j++)
{
printf("Enter the %ld element-",j+1);
scanf("%ld",&b[j]);
}
}
else goto start;
puts("------------------------Elements after merging----------------------");
for(i=0;i<n;i++)
{
c[k]=a[i];
k++;
}
for(j=0;j<m;j++)
{
c[k]=b[j];
k++;
}
for(i=0;i<k;i++)
{
for(j=0;j<(k-1);k++)
{
if(c[j]<c[j+1])
{
temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
}
}
for(i=0;i<k;i++)
{
printf("%4ld",c[i]);
}
getch();
}
