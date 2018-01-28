#include <stdio.h>

int main(void) {
	int n,c=0,a[50],i;
	float m;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=c+a[i];
		m=c/n;
		
	}
	printf("%f",m);
	return 0;
}
