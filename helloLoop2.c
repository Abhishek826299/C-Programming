#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many times you want to print Hello : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Hello\n");
    }
    return 0;
}