#include <stdio.h>

int main(void) 
{
	
   int x,c,i;
   int a=1,b=1;
   scanf("%d",&x);
   printf("%d\t%d",a,b);
   for(i=2;i<x;i++)
   {
     c=a+b;
     a=b;
     b=c;
    printf("\t%d",c);
   }
   return 0;
}
