#include <stdio.h>

int main(void) {
	int n,d=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
	d++;
	}
	printf(" count is %d",d);
	return 0;
}
