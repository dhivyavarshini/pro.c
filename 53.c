#include <stdio.h>

int main(void) {
	int n,s=0,a;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		s=s+a;
	}
	printf("%d",s);
	return 0;
}
