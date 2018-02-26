#include<stdio.h>

void main()
{
int a1,a2,r=1;

printf("Enter the numbers:");
scanf("%d %d",&a1,&a2);
while(a2!=0)
{
r*=a1;
--a2;
}
printf("The result is:%d",r);

}
