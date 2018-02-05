#include<stdio.h>
#include<conio.h>
void main()
{
int b;
printf("enter the number");
scan("%d",&b);
while((b%10)!=0)
{
b++;
}
printf("the multiple nearest is %d",b);
}
