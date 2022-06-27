#include <stdio.h>

// Write a c program to find out the sum of series 1^2 + 2^2 + …. + n^2
int main()
{
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("The num of 1 to %d is %d: ", n, sum);

    return 0;
}