#include <stdio.h>

int main(void) {
	char a[60]="XCODE";
	int i;
	for(i=0;i<=6;i++)
	{
	if(i%2==0)
	{
		
	
	printf("%c",a[i]);
	}
	}
	printf(" ");
	for(i=1;i<=6;i++)
	{
		if(i%2!=0)
		{
			
		
		printf("%c",a[i]);
		}
		
	}
	
	return 0;
}
