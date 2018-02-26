#include <stdio.h>

int main(void) {
	int n,a[10],i;
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d ",&a[i]);
		if(a[i]!=i)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}
