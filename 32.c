#include <stdio.h>
#include<string.h>

int main(void) {
	char a[150]="hello world";
	 int i,c=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
			c++;
	}
	printf("no. of words are %d",c+1);
	return 0;
}
