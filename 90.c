#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i;
	scanf("%s",&a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
		printf("%c",a[i]);
		}
			}
	return 0;
}
