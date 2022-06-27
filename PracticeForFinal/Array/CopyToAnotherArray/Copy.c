#include<stdio.h>

int main() {
    int arr1[100], n, i, arr2[100];

    printf("How many number you need : ");
    scanf("%d", &n);

    printf("Array1 : ");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d, ", arr1[i]);
    }

    printf("Array2 : ");
    for ( i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    for ( i = 0; i < n; i++)
    {
        printf("\n%d,", arr2[i]);
    }
    
    
    
}