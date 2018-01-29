#include<stdio.h>
#include<string.h>
int main()
{
int b;
char a[50]="laptop is good";
b=strlen(a)-strlen("\t\t");
printf("the length is %d",b);
return 0;
}
