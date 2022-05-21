#include <stdio.h>
#include <stdlib.h>

int main() {

    double basic_salary, dearness_allownance, house_rent, gross_salary;

    printf("Enter niloys basic_salary : ");
    scanf("%lf", &basic_salary);
    printf("basic salary %.2lf\n", basic_salary);
    dearness_allownance = basic_salary * 0.4;
    printf("dearness_allownance = %.2lf\n", dearness_allownance);
    house_rent = basic_salary * 0.2;
    printf("house_rent = %.2lf\n", house_rent);
    gross_salary = basic_salary - dearness_allownance - house_rent;
    printf("Gross salary of niloys = %.2lf\n", gross_salary);


                                    //
                                            //        addition, substraction, multiply, division of float number in a range
                                    //
//   float a,b,sum, sub, mult, div;
//    printf("Enter the value of a : ");
//    scanf("%f", &a);
//    printf("Enter the value of b : ");
//    scanf("%f", &b);
//
//    printf("First number %.4f\n", a);
//    printf("Second number %.4f\n", b);
//    sum = a+ b;
//    sub = b - a;
//    mult = a * b;
//    div = a / b;
////    int mod =a%b;
//    printf("Sum = %.2f\n ", sum);
//    printf("Substract = %.2f\n ", sub);
//    printf("Multiply = %.2f\n ", mult);
//    printf("Division = %.2f\n ", div);
//    printf("Mod = %.2f\n", mod);



                                    //
                                            //        addition, substraction, multiply, division of int number
                                    //

//    int a,b,sum, sub, mult, div, mod;
//    printf("Enter the value of a : ");
//    scanf("%d", &a);
//    printf("Enter the value of b : ");
//    scanf("%d", &b);
//
//    printf("First number %d\n", a);
//    printf("Second number %d\n", b);
//    sum = a+ b;
//    sub = b - a;
//    mult = a * b;
//    div = a / b;
//    mod = a%b;
//    printf("Sum = %d\n ", sum);
//    printf("Substract = %d\n ", sub);
//    printf("Multiply = %d\n ", mult);
//    printf("Division = %d\n ", div);
//    printf("Mod = %d\n", mod);



                                                     //
                                                //        Find out leap year
                                        //

//    int year;
//    printf("Enter year : ");
//    scanf("%d", &year);
//    if(year%100 == 0) {
//        if(year%400 == 0) {
//            printf("%d is leap year", year);
//        }else{
//            if(year%4 == 0) {
//                printf("%d is leap year", year);
//            }else{
//                printf("%d is not leap year", year);
//            }
//        }
//    }
    return 0;
}
