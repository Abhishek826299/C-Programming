#include<stdio.h>
int main()
{
    int id;
    char name[100];
    int qty;
    float price, total, discountAmt, discountPercent, finalAmt;
    printf("Enter details for product");
    printf("ID : ");
    scanf("%d",&id);
    printf("Name : ");
    scanf("%s",&name);
    printf("Quantity : ");
    scanf("%d",&qty);
    printf("Price (per unit) : ");
    scanf("%f",&price);
    printf("Discount (%%) : ");
    scanf("%f",&discountPercent);

    total = qty * price;
    discountAmt = (discountPercent);
    finalAmt = total - discountAmt;

    printf("ID\tname\tQty\tPrice\tTotal\tDiscount\tFinal\n");
    printf("%d\t%s\t%d\t %.2f\t%.2f\t%.2f\t\t%.2f\n",id,name,qty,price,total,discountAmt,finalAmt);

    return 0;
}