#include<stdio.h>
int main(){
    float mark1, mark2, mark3, mark4, mark5, sum,percentage_of_mark;

    //take input from user for mark
    printf("Input mark for Subject 1= ");
    scanf("%f", &mark1);
    printf("Input mark for Subject 2= ");
    scanf("%f", &mark2);
    printf("Input mark for Subject 3= ");
    scanf("%f", &mark3);
    printf("Input mark for Subject 4= ");
    scanf("%f", &mark4);
    printf("Input mark for Subject 5=  ");
    scanf("%f", &mark5);

    //calculation of mark
    sum = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage_of_mark = (sum * 100) / 500;

    //print the sum and percentage of mark
    printf("Aggregate mark obtained by student= %.2f \n Percentage of mark is = %.2f", sum, percentage_of_mark);

    return 0;
}