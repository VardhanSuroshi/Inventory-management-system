#ifndef INVENTORY_H
#define INVENTORY_H

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50
#define FILENAME "inventory.txt"

struct Product {
    char name[MAX_NAME_LENGTH];
    char location[MAX_NAME_LENGTH];
    int quantity;
    float selling_price;
    float profit_margin;
};

void addProduct();
void displayInventory();
void saveInventory();
void loadInventory();

#endif /* INVENTORY_H */
