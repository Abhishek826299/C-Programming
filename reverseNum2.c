#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    printf("Enter a number : ");
    scanf("%s",&num);

    strrev(num);
    printf("Reverse number is %s",num);
    return 0;
}