#include<stdio.h>

int main() {
    double salary, dearness_allowance, house_rent, gross_salary;
    printf("Enter your salary : ");
    scanf("%lf", &salary);
    dearness_allowance = salary * 0.4;
    house_rent = salary * 0.2;
    gross_salary = salary - (dearness_allowance + house_rent);
    printf("GrossSalary of Niloys = %.2lf", gross_salary);
}

