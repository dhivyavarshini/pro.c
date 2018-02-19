#include <stdio.h>

int main(void) {
	int n,r=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("%d",r);
	return 0;
}
