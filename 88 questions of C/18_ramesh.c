#include<stdio.h>

int main(){
    int salary;
    float grossSalary;
    printf("Enter salary\n");
    scanf("%d",&salary);
    grossSalary = (salary*40)/100;
    printf("gross salaray = %0.1f\n",grossSalary);
    return 0;
}