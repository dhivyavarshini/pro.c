#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int x;
printf("enter the input");
scanf("%s",a);
strcpy(b,a);
strrev(a);
x=strcmp(a,b);
if(x==0)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
}
