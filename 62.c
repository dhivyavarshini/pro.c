#include <stdio.h>
#include<string.h>

int main(void) {
	char a[50]="11011";
	int i,b=0;
	
	for(i=0;i<50;i++)
	{
		if(a[i]=='1'||a[i]=='0')
		{
			b++;
		}
	
	}
	if(b>0)
	{
		printf("yes");
	}
	return 0;
}
