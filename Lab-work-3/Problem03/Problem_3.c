#include <stdio.h>

int main() {
    int number, i, flag=0;

    printf("Enter check your number : ");
    scanf("%d", &number);

    if (number == 1 || number == 0) 
    {
        flag = 1;
    }

    if (number <= 300)
    {
        for ( i = 2; i <= number/2; i++)
        {
            if (number % i == 0)
            {
                printf("%d is not primary number.", number);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d is primary number.", number);
        }
    }
    
    


    return 0;
    
}