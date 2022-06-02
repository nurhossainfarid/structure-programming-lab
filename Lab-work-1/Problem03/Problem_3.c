#include<stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, totalMark, averageMark;

    // enter the input (subject number)
    printf("Enter your sub1 mark : ");
    scanf("%f", &sub1);
    printf("Enter your sub2 mark : ");
    scanf("%f", &sub2);
    printf("Enter your sub1 mark : ");
    scanf("%f", &sub3);
    printf("Enter your sub4 mark : ");
    scanf("%f", &sub4);
    printf("Enter your sub5 mark : ");
    scanf("%f", &sub5);

    // process
    totalMark = sub1 + sub2 + sub3 + sub4 + sub5;
    averageMark = totalMark / 5;

    // show output
    printf("Total marks and Average Marks= %.2f\n  %.2f\n", totalMark, averageMark);

    return 0;
}