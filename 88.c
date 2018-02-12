#include <stdio.h>

int main(void) {
	int n1,n2,g,i,l;
	scanf("%d %d",&n1,&n2);
	for(i=1;i<=n1&&i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			g=i;
		}
	}
	l=(n1*n2)/g;
	printf("%d",l);
	return 0;
}
