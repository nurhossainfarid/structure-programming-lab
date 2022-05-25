#include<stdio.h>

int StudentResult() {
    double marks;

    printf("Enter your marks : ");
    scanf("%lf", &marks);

    if(marks >= 80 && marks<=100) {
        {
            if(marks >= 90){
                printf("Golden A+");
            } else {
                printf("A+");
            }
        }
    }
    else if(marks >= 70 && marks<= 74) {
        printf("B");
    }
    else if(marks >= 65 && marks<= 69) {
        printf("C");
    }
    else if(marks >= 60 && marks<= 64) {
        printf("D");
    }
    else {
        printf("F");
    }
}

