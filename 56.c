#include <stdio.h>
#include<string.h>


int main(void) {
	char a[1000]="hello123";
	int i,b=0;
	
	for(i=0;i<1000;i++)
	{
		if((a[i]>='A'||a[i]<='Z'||a[i]>='a'||a[i]<='z')&&(a[i]>='0'||a[i]<='9'))
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
