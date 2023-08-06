#include <stdio.h>
#include "inventory.h"

int main() {
    int choice;

    while (1) {
        printf("\nInventory System\n");
        printf("1. Add Product\n");
        printf("2. Display Inventory\n");
        printf("3. Save Inventory\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                displayInventory();
                break;
            case 3:
                saveInventory();
                break;
            case 4:
                printf("Exiting...\n");
                saveInventory();
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
