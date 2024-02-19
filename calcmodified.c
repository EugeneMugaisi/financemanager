// ENE212-0083/2020
// Mugaisi Eugene Muruli
#include <stdio.h>

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is undefined.\n");
        return 0.0;
    }
}

int main() {
    double num1, num2, sum, difference, product, quotient, remainderValue;
    printf("\n\t Welcome to Eugene's simple Calculator\n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;


    printf("The sum of the numbers is: %lf\n", sum);
    printf("The difference of the numbers is: %lf\n", difference);
    printf("The sum and difference of the numbers are: %lf, %lf\n", sum, difference);
    printf("The product of the numbers is: %.2lf\n", product);
    if (num2 != 0) {
        printf("The quotient of the numbers is: %.2lf\n", quotient);
    }

   printf("\n\nThank you for using Eugene's calculator!");
    return 0;
}