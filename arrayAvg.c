#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,avg;
    printf("How Many Elements You Want To Enter : ");
    scanf("%d",&n);
    float num[n];

    for(i=0;i<n;i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%f",&num[i]);
        sum+=num[i];
    }
    avg=sum/n;
    printf("sum=%.2f\n",sum);
    printf("Average=%.2f\n",avg);

    return 0;
}