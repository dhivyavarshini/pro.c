#include <stdio.h>

int main(void) {
	int N,a[10000],i,t,j;
	scanf("%d\n",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d ",&a[i]);

	}
	for(i=0;i<N-1;i++)
	{
	for(j=1;j<N;j++)	
	{
	if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	}
	}
	printf("%d %d",a[0],a[N-1]);
	
	return 0;
}
