#include<stdio.h>

int main() {
    int fibonacci[100], i, n;

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    printf("Enter your fibonacci number : ");
    scanf("%d", &n);

    for ( i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d", fibonacci[i]);
    }
    
}