#include<stdio.h>
#include<string.h>
void main()

{
char str[100];
int len,i;
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
                if(i==0)
                {
                str[0]=toupper(str[0]);
                }
                if(str[i]==' ')
                {
                str[i+1]=toupper(str[i+1]);
                }
}
printf("%s",str);

}
