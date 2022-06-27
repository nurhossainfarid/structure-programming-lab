#include<stdio.h>

int main() {
    int arr[] = {32, 29, 47, 74, 974, 83, 82}, i;

    int value = 479;
    int position = -1;

    for ( i = 0; i < 7; i++)
    {
        if (arr[i] == value)
        {
            position = i + 1;
            break;
        }
        
    }

    if (position == -1)
    {
        printf("%d is not found", value);
    } else {
        printf("\n%d is found and position is %d", value, position);
    }
    
    
}