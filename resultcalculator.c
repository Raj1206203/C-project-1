#include<stdio.h>

int main()
{
    int rollno,sub1,sub2,sub3,total;
    char name[20];
    float avg;

    printf("enter your rollno:");
    scanf("%d",&rollno);

    printf("enter your name:");
    scanf("%s",&name);

    printf("enter your Sub1 Marks:");
    scanf("%d",&sub1);

    printf("enter your Sub2 Marks:");
    scanf("%d",&sub2);

    printf("enter your Sub3 Marks:");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3;

    avg = total/3;

    printf("\nYour total marks is: %d",total);

    printf("\nYour avg is: %.2f",avg);

    return 0;
}