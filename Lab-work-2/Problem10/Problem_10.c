#include<stdio.h>

int main() {
    double sub1, sub2, sub3, sub4, sub5, sum, average;

    // input
    printf("Enter your first subject number : ");
    scanf("%lf", &sub1);
    printf("Enter your second subject number : ");
    scanf("%lf", &sub2);
    printf("Enter your third subject number : ");
    scanf("%lf", &sub3);
    printf("Enter your fourth subject number : ");
    scanf("%lf", &sub4);
    printf("Enter your five subject number : ");
    scanf("%lf", &sub5);

    // process
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    average = sum / 5;

    // output 
    if (average >= 80)
    {
        if (average >= 90)
        {
            printf("You got a Golden A Plus");
        } else {
            printf("You got a A Plus");
        }
    } else if(average >= 70) {
        printf("You got A");
    } else if(average >= 60) {
        printf("You got B");
    } else if (average >= 50) {
        printf("You got C");
    } else if (average >= 40) {
        printf("You got D");
    } else {
        printf("You are Failed in exam");
    }

    return 0;
    
}

    // switch (average / 10)
    // {
    // case 10:
    //     printf("You got a brilliant result");
    //     break;
    // case 9:
    //     printf("You got a brilliant result");
    //     break;
    // case 8:
    //     printf("You got a brilliant result");
    //     break;
    // case 7:
    //     printf("You got a brilliant result");
    //     break;
    // case 6:
    //     printf("You got a brilliant result");
    //     break;
    // case 5:
    //     printf("You got a brilliant result");
    //     break;
    // case 4:
    //     printf("You got a brilliant result");
    //     break;
    
    // default:
    //     printf("You are failed in the exam");
    //     break;
    // }