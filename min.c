#include <stdio.h>

int main(void) {
	int a[50],N,i,min;
	scanf("%d\n",&N);
	for(i=0;i<N;++i)
	{
	scanf("%d ",&a[i]);
	}
	min=a[0];
	for(i=1;i<N;++i)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
