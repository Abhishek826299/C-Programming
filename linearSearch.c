#include<stdio.h>
int main()
{
    int a[100],key,i,n,flag;
    printf("How Many Elements You Want To Enter : ");
    scanf("%d",&n);
    
    printf("Enter %d elements ",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter Element For Search : ");
    scanf("%d",&key);

    flag=0;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("Found");

    else
    printf("Not Found");

    return 0;
}