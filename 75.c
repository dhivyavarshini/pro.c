#include<stdio.h>
int main()
{
  char string[100];
  int i,e,count=0;
  printf("enter the string");
  scanf("%s",&string);
  for(i=0;string[i]!=0;i++)
  {
    count++;
  }
e=count/2;
   if(count%2!=0)
  {
    string[e]='*';
    for(i=0;string[i]!='\0';i++)
    {
    printf("%c",string[i]);
    }
    }
    else
    {
      string[e-1]='*';
      string[e]='*';
      for(i=0;string[i]!='\0';i++)
      {
        printf("%c",string[i]);
      }
    }
return 0;  
}
