#include<stdio.h>

int main() {
    int a, b, c;

    // input 
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    printf("Enter the third number : ");
    scanf("%d", &c);

    // process
    if (a > b)
    {
        if (a > c)
        {
            printf("A is greater than b and c");
        } else {
            printf("C is greater than a and b");
        } 
    } else if (b > a) {
       if (b > c)
       {
           printf("B is greater than a and c");
       } else {
           printf("C is greater than a and b");
       } 
    }

    return 0;
}