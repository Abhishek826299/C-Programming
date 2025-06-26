#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,flag;
    printf("Enter a number : ");
    scanf("%d",&n);

    flag=1;
    if(n%2==0 || n%3==0)
    flag=0;

    else{
        for(i=5;i<=sqrt(n);i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("Prime Number");

    else
    printf("Not Prime Number");

    return 0;

}