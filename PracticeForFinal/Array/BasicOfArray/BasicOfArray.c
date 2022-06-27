#include<stdio.h>

int main() {
    int n, arr[5], i;

    printf("Enter your array size : ");
    scanf("%d", &n);

    for ( i = 0; i < 5; i++)
    {
    scanf("%d", &arr[i]);
    };

    printf("Show out put of array : ");

    for ( i = 0; i < 5; i++)
    {
        printf("\n%d", arr[i]);
    }
    
    return 0;
}