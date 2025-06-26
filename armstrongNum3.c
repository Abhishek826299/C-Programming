#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,cnt=0,temp;
    float result=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        cnt++;
        n/=10;
    }

    n=temp;
    while(n>0)
    {
        int rem=n%10;
        result=result+pow(rem,cnt);
        n/=10;
    }
    if(result==temp)
    printf("Armstrong Number");

    else
    printf("Not An Armstrong Number");

    return 0;
}