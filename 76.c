#include<stdio.h>
void main()
{
int s,i;
int flag=0;

scanf("%d",&s);
for(i=2;i<=s/2;i++)
{
if(s%i==0)
{
flag=1;
}
}
if(flag!=0)
{
   printf("composite");
  }
   else
   {
      printf("no");
   }
}
