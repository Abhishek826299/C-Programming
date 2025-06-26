#include<stdio.h>
int main()
{
    int num,i,cnt=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Factors of %d are : ",num);
    for(i=1;i<=num;i++)
    {
        if(num % i == 0)
        {
            printf("%d",i);
            cnt++;
            sum += i;
        }
    }
    printf("\nTotal number of factors : %d\n",cnt);
    printf("Sum of factors : %d\n",sum);
}