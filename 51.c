#include <stdio.h>

int main(void) {
	int a,b,s,c;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		s=(s*10)+b;
		a=a/10;
	}
	while(s!=0)
	{
		c=s%10;
		printf("%d ",c);
		s=s/10;
	}
	return 0;
}
