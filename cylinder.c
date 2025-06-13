#include<stdio.h>
int main()
{
    float radius,height,surface_area,volume;
    printf("\n Enter a radius of cylinder : ");
    scanf("%f",&radius);
    printf("Enter a height of cylinder : ");
    scanf("%f",&height);
    surface_area=(2*(3.14)*radius*radius)+(2*(3.14)*radius*height);
    volume=(3.14)*radius*height;
    printf("surface_area of cylinder is:%f",surface_area);
    printf("\n Volume of cylinder is:%f",volume);
    return 0;
}