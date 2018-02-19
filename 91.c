#include <stdio.h>

int main(void) {
	int l,b,h,v,tot;
	scanf("%d %d %d",&l,&b,&h);
	v=l*b*h;
	tot=2*((l*b)+(b*h)+(h*l));
	printf("%d %d",v,tot);
	return 0;
}
