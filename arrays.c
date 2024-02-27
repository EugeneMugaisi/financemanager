// #include <stdio.h>

// int main() {
//     // Declare an array of integers with 5 elements
//     int numbers[5];

//     // Assign values to the elements
//     numbers[0] = 10;
//     numbers[1] = 20;
//     numbers[2] = 30;
//     numbers[3] = 40;
//     numbers[4] = 50;

//     // Access and print the elements of the array
//     printf("Element 0: %d\n", numbers[0]);
//     printf("Element 1: %d\n", numbers[1]);
//     printf("Element 2: %d\n", numbers[2]);
//     printf("Element 3: %d\n", numbers[3]);
//     printf("Element 4: %d\n", numbers[4]);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int marks[10] = {60, 50, 75, 80, 62, 65, 70, 61, 90, 81};
//     int num;
//     for (num = 0; num <= 9; num++) {
//         printf("%d\n ", marks[num]);
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int marks[10];
    int num;

    // printf("Enter 10 values\n");
    // scanf("%d\n ", marks[num]);

    for (num = 0; num <= 9; num++) {
        // printf("Enter 10 values\n");
        scanf("%d", marks[num]);
    }

    for (num = 0; num <= 9; num++) {
        printf("%d\n ", marks[num]);
    }
    return 0;
}
