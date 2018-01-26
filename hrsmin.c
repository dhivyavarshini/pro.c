#include <stdio.h>

int main(void) {
	int n,a,b;
	scanf("%d",&n);
	a=n/60;
	b=n%60;
	printf("%d %d",a,b);
	return 0;
}
