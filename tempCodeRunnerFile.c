#include <stdio.h>

int main() {
    int originalArray[9];  // Reduced array size to accommodate the omission
    int array[9];          // Array before any modification
    int omittedNumber = 6;  // Number to be omitted

    // Assigning numbers in ascending order to the original array
    int i, j;
    for (i = 0, j = 1; i < 4; i++) {
        originalArray[i] = j++;
    }
    originalArray[4] = 0;  // Reserve a position for the omitted number
    for (i = 5; i < 9; i++) {
        originalArray[i] = j++;
    }

    // Assigning numbers in ascending order with one number omitted to the modified array
    for (i = 0, j = 1; i < 4; i++) {
        array[i] = j++;
    }
    array[4] = omittedNumber;  // Inserting the omitted number
    for (i = 5; i < 9; i++) {
        array[i] = j++;
    }

    // Printing the original array
    printf("Original Array:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    // Printing the array with the omitted number inserted
    printf("\nArray with omitted number inserted:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
