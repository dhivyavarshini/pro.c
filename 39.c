#include <stdio.h>

int main(void) {
	char a[10];
	int i,max;
	for(i=0;i<=9;i++)
	{
		scanf("%d ",&a[i]);
	
	}
	max=a[0];
	for(i=1;i<=9;i++)
	{
	if(max<a[i])
	{
		max=a[i];
	}
	}

	printf("%d",max);
	return 0;
}
