//ENE212-0083/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    struct student{
        char name[50];
        int age;
        float programming;
        float physics;
        float calculus;
    };

    int i;
    struct student results[3];

    for(i = 0; i < 3; i++){
        printf("Enter the name of student %d:\t", i + 1);
        fgets(results[i].name, sizeof(results[i].name), stdin);
        results[i].name[strcspn(results[i].name, "\n")] = 0;
        printf("Enter the age of student %d:\t", i + 1);
        scanf("%d", &results[i].age);
        printf("Enter the programming score of student %d:\t", i + 1);
        scanf("%f", &results[i].programming);
        printf("Enter the physics score of student %d:\t", i + 1);
        scanf("%f", &results[i].physics);
        printf("Enter the calculus score of student %d:\t", i + 1);
        scanf("%f", &results[i].calculus);
        getchar();
    }


    printf("\nEditing the programming score of student 2:\n");
    printf("Enter the new programming score for student 2:\t");
    scanf("%f", &results[1].programming);
    getchar();

    printf("\nUpdated Results:\n");
    for(i = 0; i < 3; i++){
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", results[i].name);
        printf("Age: %d\n", results[i].age);
        printf("Programming Score: %.2f\n", results[i].programming);
        printf("Physics Score: %.2f\n", results[i].physics);
        printf("Calculus Score: %.2f\n", results[i].calculus);
        printf("\n");
    }

    return 0;
}