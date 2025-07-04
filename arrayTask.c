#include<stdio.h>
int main()
{
    int a[100],n,i,j,cnt=0,key,sum=0,flag=0,max,min,choice,temp;
    float avg;
    printf("How Many Elements You Want To Enter : ");
    scanf("%d",&n);

    if(n<0)
    {
        printf("Enter Valid Element");
        return 0;
    }

    printf("Enter elements %d :",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("1:Display Array\n");
    printf("2:Maximum Element Of Array\n");
    printf("3:Minimum Element of Array\n");
    printf("4:Sum Of Array Element\n");
    printf("5:Average Of Array Elements\n");
    printf("6:Sort Array\n");
    printf("7:Linear Search\n");

    printf("\nEnter Choice To Perform Operation : ");
    scanf("%d",&choice);


   switch(choice)
   {
    case 1:
        for(i=0;i<n;i++)
        printf("Display Array %d",a[i]);
        break;

    case 2:
        max=a[0];
        for(i=0;i<n;i++)
        if(max<a[i])
        max=a[i];
        printf("\nMaximum Element is %d",max);
        break;

    case 3:
        min=a[0];
        for(i=0;i<n;i++)
        if(min>a[i])
        min=a[i];
        printf("\nMinimum Element is %d",min);  
        break; 

    case 4:     
        for(i=0;i<n;i++)
        sum+=a[i];
        printf("\nSum of array is %d",sum);
        break;

    case 5:
        for(i=0;i<n;i++)
        sum=sum+a[i];
        avg=sum/n;
        printf("Avarage of array is:%.2f",avg);
        break;

    case 6:
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("\nSorted array is : ");
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        break;

    case 7:
        printf("\nEnter search element : ");
        scanf("%d",&key);
        for(i=0;i<n;i++)
        {
            if(key==a[i])
            {
                flag=1;
                break;
            }
        } 

        if(flag==1)
        printf("Element Found");
        else
        printf("Element Not Found");
        break;

    default:
        printf("Wrong Choice");    
   } 
    return 0;
}