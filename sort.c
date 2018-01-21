#include <stdio.h>

int main(void) {
	int a[50],N,i,j,temp;
	scanf("%d",&N);
	for(i=0;i<N;++i)
	{
		scanf("%d ",&a[i]);
		
	}
	for(i=0;i<N;++i)
	{
		for(j=0;j<N-i-1;++j)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
