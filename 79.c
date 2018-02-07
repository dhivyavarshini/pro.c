#include<stdio.h>
int main()
{
int a,b,d;
printf("Enter two values:");
scanf("%d %d",&a,&b);
d=a*b;
if(d==(a*a)&&d==(b*b))
{
printf("YES");
}
else
{
printf("NO");
}
}
