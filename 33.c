#include <stdio.h>
#include<string.h>

int main(void) {
char a[50]="hello world";
int c=0,i;
for(i=0;a[i]!='\0';i++)
{
	if(a[i]==' ')
	{
		c++;
	}
}
printf("%d",c);
	return 0;
}
