// ENE212-0083/2020
// Mugaisi Eugene Muruli

#include <stdio.h>

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

int main() {
    double num1, num2, sum, difference;
    printf("\n\t Welcome to Eugene's simple Calculator\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = add(num1, num2);
    difference = subtract(num1, num2);

    printf("The sum of the numbers is: %.2lf\n", sum);
    printf("The difference of the numbers is: %.2lf\n", difference);
    printf("The sum and difference of the numbers are: %lf, %lf\n", sum, difference);

    printf("\n\nThank you for using Eugene's calculator!");

    return 0;
}
