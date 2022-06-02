#include<stdio.h>

int main() {
    int num,d1,d2,d3,d4,sum;
    // take input
    printf("Please Input the 4 digit value= ");
    scanf("%d", &num);
    //calculate
    d1 = num % 10;
    num = num / 10;
    d2 = num % 10;
    num = num / 10;
    d3 = num % 10;
    num = num / 10;
    d4 = num % 10;
    sum = d1 + d4;

    // show output
    printf("%d",sum);
}