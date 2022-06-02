#include <stdio.h>

int main() {
    double population, percentageMen, percentageWoman, percentageLiteracy, percentageMenLiteracy, percentageWomanLiteracy;
    
    // process
    population = 80000;
    percentageMen = population * 0.52;
    percentageWoman = population - percentageMen;
    percentageLiteracy = population * 0.48;
    percentageMenLiteracy = population * 0.35;
    percentageWomanLiteracy = percentageLiteracy - percentageMenLiteracy;

    // show output
    printf("%.2lf %.2lf", percentageMenLiteracy, percentageWomanLiteracy);

    return 0;
}