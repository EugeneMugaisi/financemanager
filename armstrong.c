#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    
    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int isArmstrong(int num) {
    int originalNum = num, result = 0, remainder, n = countDigits(num);

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (num == result);
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}
