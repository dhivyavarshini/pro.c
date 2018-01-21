#include <stdio.h>

int main(void) {
	int a[50],N,i,max;
	scanf("%d\n",&N);
	for(i=0;i<N;++i)
	{
	scanf("%d ",&a[i]);
	}
	max=a[0];
	for(i=1;i<N;++i)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;
}
