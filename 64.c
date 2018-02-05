include <stdio.h>

int main(void) {
	int a,x,b;
	scanf("%d %d",&a,&b);
	x=a*b;
	if(x%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	
	return 0;
}
