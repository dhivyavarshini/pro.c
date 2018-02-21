#include<stdio.h>
int main()
{
int n,i=1,rem;

scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    i=i*rem;
    n=n/10;
}
printf("%d",i);



return 0;
}
