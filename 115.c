#include <stdio.h>

int main(void) {
	int n,k,i,j,a[28],t;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(i+1==k)
		{
		printf("%d",a[i]);	
		}
	}
	return 0;
}
