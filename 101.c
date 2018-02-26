#include <stdio.h>
#include<string.h>

int main(void) {
	char a[10];
	int b,i,n;
	scanf("%s ",&a);
	b=strlen(a);
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[b-1]);
		b--;
	}
	
	return 0;
}
