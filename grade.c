#include<stdio.h>
int main()
{
    int roll;
    char sub1[100],sub2[100],sub3[100],name[100];
    float m1,m2,m3,total,avg;
    char grade;
    printf("Enter student details :\n");
    printf("Roll no : ");
    scanf("%d",&roll);

    printf("Name");
    scanf("%s",&name);

    printf("Enter subject 1 name :\n");
    scanf("%s",&sub1);

    printf("Enter subject 2 name :\n");
    scanf("%s",&sub2);

    printf("Enter subject 3 name :\n");
    scanf("%s",&sub3);

    printf("Enter subject 1 marks :\n");
    scanf("%f",&m1);

    printf("Enter subject 2 marks :\n");
    scanf("%f",&m2);

    printf("Enter subject 3 marks :\n");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg<=100 && avg>=90)
    grade='A';

    else if(avg<=90 && avg>=80)
    grade='B';

    else if(avg<=80 && avg>=70)
    grade='C';

    else if(avg<=70 && avg>=50)
    grade='D';

    else if(avg<=50 && avg>=30)
    grade='E';

    else grade='F';

    printf("Roll no :%d.roll");
    printf("\n Name %s.name");
    printf("\n Subject 1 %s",sub1);
    printf("\n Subject 2 %s",sub2);
    printf("\n Subject 3 %s",sub3);

    printf("\n Marks 1 %f",m1);
    printf("\n Marks 2 %f",m2);
    printf("\n Marks 3 %f",m3);

    printf("\n total %f",total);
    printf("\n avg %f",avg);
    printf("\n grade %c",grade);

    return 0;
    
}