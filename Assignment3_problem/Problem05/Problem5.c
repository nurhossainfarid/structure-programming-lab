#include<stdio.h>
#include<math.h>

int main() {
    int num, temp, count = 0, reminder, sum=0;

    printf("Enter your value : ");
    scanf("%d", &num);
    temp = num;

    while (temp !=0){
        temp = temp / 10;
        count += 1;
    }
    temp = count;
    int temp_new = num;

    while (temp!=0)
    {
        reminder = temp_new % 10;
        sum = sum + pow(reminder, count);
        temp_new = temp_new / 10;
        temp--;
    }
    printf("%d", sum);
    
    
}