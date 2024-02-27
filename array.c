#include <stdio.h>

int main() {
    int originalArray[10];  // Array before any modification
    int array[9];           // Reduced array size to accommodate the omission
    int omittedNumber = 6;   // Number to be omitted

    // Assigning numbers in ascending order to the original array
    int i, j;
    for (i = 0, j = 1; i < 5; i++) {
        originalArray[i] = j++;
    }
    // Reserve a position for the omitted number without assigning any value
    originalArray[5] = 0;
    for (i = 6; i < 10; i++) {
        originalArray[i] = j++;
    }

    // Assigning numbers in ascending order with one number omitted to the modified array
    for (i = 0, j = 1; i < 5; i++) {
        array[i] = j++;
    }
    array[5] = omittedNumber;  // Inserting the omitted number
    for (i = 6; i < 9; i++) {
        array[i] = j++;
    }

    // Printing the original array
    printf("Original Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", originalArray[i]);
    }
    printf("\n");

    // Printing the array with the omitted number inserted
    printf("\nArray with omitted number inserted:\n");
    for (i = 0; i < 9; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Deleting the added number in the modified array
    for (i = 5; i < 8; i++) {
        array[i] = array[i + 1];
    }

    // Printing the array after deleting the number
    printf("\nArray with omitted number deleted:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
