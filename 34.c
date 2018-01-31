#include <stdio.h>

int main(void) {
char a[1000]="hello world.goodbye";
int i,c=0;
for(i=0;i<1000;i++)
{
	if(a[i]=='.')
	{
		c++;
	}
}
printf("%d",c+1);

	return 0;
}
