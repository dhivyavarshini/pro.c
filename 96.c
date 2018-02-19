#include<stdio.h>

void main()
{
int c=0,n,i;
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
c=1;
}
}
if(c==1)
{
printf("yes");
}
else
{
printf("no");
}

}
