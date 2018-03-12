#include <stdio.h>

int main(void) {
	int n,k,i,a[28],c=0;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			c++;
		
		if(c==k)
		{
			printf("%d",a[i]);
		}
		}
	}
	
	return 0;
}
