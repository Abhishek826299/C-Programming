#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);

    if(a<0)
    printf("Min is %d",a);

    else
    printf("Min is %d",b);

    return 0;
}