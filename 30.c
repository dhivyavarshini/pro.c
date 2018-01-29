#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h3,m3;
    printf("enter time in hours and minutes");
    scanf("%d%d",&h1,&m1);
    printf("enter second time in hours and minutes");
    scanf("%d%d",&h2,&m2);
    h3=h1-h2;
    m3=m1-m2;
    printf("the difference in time is %d\t%d",h3,m3);
    return 0;
}
