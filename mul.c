#include <stdio.h>

int main(void) {
	int i,n,s;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		s=i*n;
		printf("%d ",s);
	}
	return 0;
}
