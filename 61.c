#include <stdio.h>
#include<string.h>

int main(void) {
	char a[50]="laptop";
	int k,i;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
