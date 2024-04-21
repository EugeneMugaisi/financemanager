//ENE212-0083/2020
//ENE212-0088/2020
//ENE212-0263/2020
//ENE212-0265/2020
//ENE212-0262/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structures to represent transactions, budgets, and investments
typedef struct {
    char description[100];
    double amount;
    int is_income; // 1 if income, 0 if expense
} Transaction;

typedef struct {
    char category[50];
    double budget_amount;
} Budget;

typedef struct {
    char investment_name[50];
    double investment_amount;
    double current_value;
} Investment;

// Function prototypes
void addTransaction(Transaction transactions[], int *num_transactions);
void viewTransactions(Transaction transactions[], int num_transactions);
void addBudget(Budget budgets[], int *num_budgets);
void viewBudgets(Budget budgets[], int num_budgets);
void addInvestment(Investment investments[], int *num_investments);
void viewInvestments(Investment investments[], int num_investments);
void generateReports(Transaction transactions[], int num_transactions, Budget budgets[], int num_budgets, Investment investments[], int num_investments);

// Main function
int main() {
    Transaction transactions[100]; // Array to store transactions
    int num_transactions = 0;

    Budget budgets[10]; // Array to store budgets
    int num_budgets = 0;

    Investment investments[10]; // Array to store investments
    int num_investments = 0;

    int choice;

    do {
        // Display menu options
        printf("\nPersonal Finance Manager\n");
        printf("1. Add Transaction\n");
        printf("2. View Transactions\n");
        printf("3. Add Budget\n");
        printf("4. View Budgets\n");
        printf("5. Add Investment\n");
        printf("6. View Investments\n");
        printf("7. Generate Reports\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTransaction(transactions, &num_transactions);
                break;
            case 2:
                viewTransactions(transactions, num_transactions);
                break;
            case 3:
                addBudget(budgets, &num_budgets);
                break;
            case 4:
                viewBudgets(budgets, num_budgets);
                break;
            case 5:
                addInvestment(investments, &num_investments);
                break;
            case 6:
                viewInvestments(investments, num_investments);
                break;
            case 7:
                generateReports(transactions, num_transactions, budgets, num_budgets, investments, num_investments);
                break;
            case 8:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 8);

    return 0;
}