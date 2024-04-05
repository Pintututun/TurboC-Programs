#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
printf("Enter four numbers--");
scanf("%d %d %d %d",&a,&b,&c,&d);
void f1(int a,int b,int c,int d);
}
void f1(int e,int f,int g,int h)
{
if((e==f)&&(f==g)&&(g==h))
{
 printf("Both are equal");
}
else if((e>f)&&(e>g)&&(g>h))
{
 printf("%d is biggest",e);
}
else if((f>g)&&(f>h)&&(f>e))
{
printf("%d is biggest",f);
}
else if((g>h)&&(g>f)&&(g>e))
{
 printf("%d is biggest",g);
}
 else {printf("%d is biggest",h);}
getch();

}