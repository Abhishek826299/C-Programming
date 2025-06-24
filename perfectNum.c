#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;//sum=sum+i;
    }
    if(sum==n)
    printf("Perfect Number");

    else
    printf("Not A Perfect Number");

    return 0;
}