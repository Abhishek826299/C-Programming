#include<stdio.h>
int main()
{
   float num1,num2,arithmetic_mean,harmonic_mean;
   printf("Enter the first number : ");
   scanf("%f",&num1);
   printf("Enter the second number : ");
   scanf("%f",&num2);
   if(num1+num2==0){
   printf("Harmonic mean is undefined for these numbers.\n");

   } else{
    arithmetic_mean=(num1+num2)/2;
    harmonic_mean=(num1*num2)/(num1+num2);
    printf("Arithmetic mean :%.2f\n",arithmetic_mean);
    printf("Harmonic mean:%.2f",harmonic_mean);
   }
   return 0;
}