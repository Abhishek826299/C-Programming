#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);

    (a>b)?printf("Max is %d",a):printf("Max is %d",b);

    return 0;
}