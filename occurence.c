#include<stdio.h>
int main()
{
    int a[100],i,n,key,cnt=0;
    printf("How Many Elements You Want To Enter : ");
    scanf("%d",&n);
    
    printf("Enter %d elements ",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter Element For Occurrence : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        cnt++;
    }
    if(cnt==0)
    printf("Not Found");

    else
    printf("Count is %d ",cnt);

    return 0;
}
