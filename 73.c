#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,l;
printf("enter the number");
scanf("%d",&n);
printf("enter the interval low and high respectively");
scanf("%d%d",&l,&r);
if((n>l)&&(n<r))
{
printf("yes");
}
else
{
printf("no");
}
}
