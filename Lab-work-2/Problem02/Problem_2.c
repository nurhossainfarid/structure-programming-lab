#include<stdio.h>

int main() {
    int num;

    // input
    printf("Enter the number : ");
    scanf("%d", &num);

    // process
    if (num % 2 == 0)
    {
        printf("%d is even number", num);
    } else {
        printf("%d is odd number", num);
    }
    
    return 0;
}