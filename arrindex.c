#include <stdio.h>

int main(void) {
	int a[30];
	int i,N;
	scanf("%d\n",&N);
	for(i=0;i<N;i++)
	{
	scanf("%d ",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		printf("%d %d\n",a[i],i);
	}
	return 0;
}
