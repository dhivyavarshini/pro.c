#include <stdio.h>

int main(void) {
	int N,A,D,sum,tn;
	scanf("%d %d %d",&N,&A,&D);
	sum=N*((2*A)+(N-1)*D)/2;
	tn=A+(N-1)*D;
	printf("%d",sum);
	
	
	return 0;
}
