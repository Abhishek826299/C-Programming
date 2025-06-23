#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter a number : ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
  {
    sum = sum + i;
    i++;
  }

  printf("\nSum is %d",sum);
  return 0;
}