#include <stdio.h>

int b = 1; 
int totalBill = 0; 
int menu() {
    int choice;
    printf("\nMenu:\n");
    printf("1. Samosa 20/-\n2. Dosa 30/-\n3. Tea 10/-\n0. Exit\n");
    printf("Enter your Choice : ");
    scanf("%d", &choice);
    return choice;
}

void Order(int choice) {
    int quantity;
    switch (choice) {
    case 1:
        printf("Enter number of plates : ");
        scanf("%d", &quantity);
        totalBill += quantity * 20;
        printf("Samosa\n");
        break;
    case 2:
        printf("Enter number of plates : ");
        scanf("%d", &quantity);
        totalBill += quantity * 30;
        printf("Dosa\n");
        break;
    case 3:
        printf("Enter number of cups : ");
        scanf("%d", &quantity);
        totalBill += quantity * 10;
        printf("Tea\n");
        break;
    case 0:
        b = 0;
        printf("Thank You!\n");
        break;
    default:
        printf("Invalid choice\n");
    }
}
void printBill() {
    printf("\n::Your Bill::\n");
    printf("Grand Total: %d/-\n", totalBill);
}

void Payment() {
    int cash;
    int change;
    printf("Enter Your Cash: ");
    scanf("%d", &cash);
    if (cash >= totalBill) {
        change = cash - totalBill;
        printf("\nReturn %d\n\n", change);
    }
    else {
            printf("\nCase 3: When user gives money same as needed\n");
            printf("Enter Your Cash: ");
            scanf("%d", &cash);
            if (cash == totalBill) {
                printf("Thank You!\n");
            } else {
                printf("Please pay the exact amount.\n");
            }
        }
    
}

int main() {
    int choice;
    while (b) {
        choice = menu();
        Order(choice);
    }

    printBill();
    Payment();

    return 0;
}
