#include<stdio.h>

int OrOperator() {
    double gpa, ielts_score;

    printf("Enter gpa : ");
    scanf("%lf", &gpa);
    printf("Enter ielts_score : ");
    scanf("%lf", &ielts_score);

    if(gpa >= 4.00 || ielts_score>=7.00) {
        printf("Your are selected for student schollarship  ");
    } else {
        printf("Your are not selected for student schollarship");
    }
    return 0;
}

