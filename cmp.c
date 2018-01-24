#include <stdio.h>
#include<string.h>
int main(void) {
char a[10],b[10];
int n,m;
scanf("%s %s",&a,&b);
m=strlen(a);
n=strlen(b);
if(m>=n)
{
	printf("%s",a);
}
else
{
	printf("%s",b);
}
	return 0;
}
