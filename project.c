#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Transaction {
    char type[10];  // Income or Expense
    float amount;
    char category[20];
};

void addTransaction() {
    FILE *file = fopen("data.txt", "a");
    struct Transaction t;

    printf("\nEnter type (Income/Expense): ");
    scanf("%s", t.type);
    printf("Enter amount: ");
    scanf("%f", &t.amount);
    printf("Enter category: ");
    scanf("%s", t.category);

    fprintf(file, "%s %.2f %s\n", t.type, t.amount, t.category);
    fclose(file);

    printf("\nTransaction Added Successfully!\n");
}

void viewRecords() {
    FILE *file = fopen("data.txt", "r");
    struct Transaction t;

    printf("\n------ All Transactions ------\n");
    printf("Type\t\tAmount\t\tCategory\n");
    printf("-----------------------------------------\n");

    while (fscanf(file, "%s %f %s", t.type, &t.amount, t.category) != EOF) {
        printf("%-10s\t%-10.2f\t%-10s\n", t.type, t.amount, t.category);
    }
    fclose(file);
}

void showSummary() {
    FILE *file = fopen("data.txt", "r");
    struct Transaction t;
    float totalIncome = 0, totalExpense = 0;

    while (fscanf(file, "%s %f %s", t.type, &t.amount, t.category) != EOF) {
        if (strcmp(t.type, "Income") == 0 || strcmp(t.type, "income") == 0)
            totalIncome += t.amount;
        else
            totalExpense += t.amount;
    }

    fclose(file);

    printf("\n------ Summary ------\n");
    printf("Total Income : %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Balance      : %.2f\n", totalIncome - totalExpense);
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Expense & Income Manager =====");
        printf("\n1. Add Transaction");
        printf("\n2. View All Transactions");
        printf("\n3. Show Summary");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTransaction();
                break;
            case 2:
                viewRecords();
                break;
            case 3:
                showSummary();
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice! Try Again.\n");
        }
    }

    return 0;
}
