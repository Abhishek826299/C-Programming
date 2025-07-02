#include<stdio.h>
int main()
{
    int a[100],i,n,key,high,low,flag,mid;
    printf("How Many Elements You Want To Enter : ");
    scanf("%d",&n);

    printf("Enter %d elements ",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter Element For Search : ");
    scanf("%d",&key);

    flag=0;
    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]>key)
               high=mid-1;

               else
               low=mid+1;
    }
    if(flag==1)
    printf("Found");

    else
    printf("Not Found");

    return 0;
}