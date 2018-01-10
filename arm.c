#include <stdio.h>

int main(void) {
	int n,rem,s,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		s=s+rem*rem*rem;
		n=n/10;
	}
	if(s==temp)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	return 0;
}
