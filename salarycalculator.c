#include<stdio.h>

int main(){

    int eid,basicsalary;
    char ename[20];
    float hra,ma,da,ta,pf,pt,gross,netsalary;

    printf("enter your eid: ");
    scanf("%d",&eid);

    printf("enter your employee name: ");
    scanf("%s",&ename);
    
    printf("enter your basic salary: ");
    scanf("%d",&basicsalary);

    hra = basicsalary * 0.3;

    ma = basicsalary * 0.05;

    da = basicsalary * 0.1;

    ta = basicsalary * 0.07;

    pf = basicsalary * 0.12;

    pt = basicsalary * 0.05;
    
    gross= basicsalary + hra + ma + da + ta ;

    netsalary = gross - pf - pt;

    printf("\nyour gross salary is : %.2f",gross);

    printf("\nyour Net salary is : %.2f",netsalary);

    return 0;
}