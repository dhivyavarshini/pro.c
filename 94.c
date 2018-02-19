#include <stdio.h>

int main(void) {
	int n,i,a[59],k;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==k-1)
		{
			printf("%d",a[i]);
		}
	}
	
	return 0;
}
