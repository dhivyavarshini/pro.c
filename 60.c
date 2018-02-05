#include <stdio.h>

int main(void) 
{
	
   int x,c,i;
   int a1=1,b1=1;
   scanf("%d",&x);
   printf("%d\t%d",a1,b1);
   for(i=2;i<x;i++)
   {
     c=a1+b1;
     a1=b1;
     b1=c;
    printf("\t%d",c);
   }
   return 0;
}
