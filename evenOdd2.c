#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%2!=0)
    printf("Number is Odd");

    else
    printf("Number is Even");

    return 0;
}