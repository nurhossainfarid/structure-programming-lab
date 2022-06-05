#include<stdio.h>

int main() {
    int i, hour, extra;
    for ( i = 1; i <= 10; i++)
    {
        printf("Enter the working hour time of a employee: ");
        scanf("%d", &hour);

        if (hour > 40)
        {
            extra = (hour - 40) * 12;
            printf("\n%d Rs. is the overtime pay of employee\n", extra);
        } else {
            printf("\n%d Rs. This employee had not done overtime.");
        }
        
    }

    return 0;
    
}