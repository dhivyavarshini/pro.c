#include <stdio.h>

int main(void) {
	char a[10];
	int j,max;
	for(j=0;j<=9;j++)
	{
		scanf("%d ",&a[j]);
	
	}
	max=a[0];
	for(j=1;j<=9;j++)
	{
	if(max<a[j])
	{
		max=a[j];
	}
	}

	printf("%d",max);
	return 0;
}
