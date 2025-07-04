#include<stdio.h>
int main()
{
    FILE *fp;
    char data[100];
    int a[100],n,i,key,pos;

    fp=fopen("number.txt","r");

    printf("Enter a N : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
        printf("%d ",a[i]);
    }

    printf("\nEnter postion of number : ");
    scanf("%d",&pos);

    printf("\nEnter a number to insert :");
    scanf("%d",&key);

    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=key;
    n++;
    
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}