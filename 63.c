#include <stdio.h>
#include<string.h>

int main(void) {
	char a[50]="hello world";
	int i,c=0;
	for(i=0;i<50;i++)
	{
		if(a[i]==' ')
		{
			c++;
                      
		}
	}
	printf("%d",c+1);
	return 0;
}
