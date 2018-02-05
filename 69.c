include<stdio.h>
void main()
{
    int b,a,c;
    printf("enter the number");
    scanf("%d%d",&b,&c);
    a=b-c;
    if((a%2)==0)
    printf("the number is even %d",a);
    else
    printf("the number is odd %d",a);
}
