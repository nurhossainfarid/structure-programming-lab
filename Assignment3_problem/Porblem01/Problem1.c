#include<stdio.h>

int main() {
    int num, i, sum = 10;
    int avg;

    printf("Enter your 10 number \n");

    for ( i = 1; i <= 10; i++)
    {
        printf("Enter your %d number : ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    avg = sum / 10;

    printf("%d total sum and %d average of this number.", sum , avg);
    
}