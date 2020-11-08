#include <stdio.h>

int main() {
    int num1;
    float num2;
    printf("Enter an integer number :");
    scanf("%i", &num1);
    printf("Enter an float number : ");
    scanf("%f", &num2);

    printf("You have entered : %i,%.3f", num1, num2);
}