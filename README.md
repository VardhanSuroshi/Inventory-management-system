# Inventory_management
The inventory management system is a program written in C that allows businesses to efficiently track, manage, and control their inventory of products. It consists of three main files: inventory.h (header file), inventory.c (source file), and main.c (main file).

# Header File (inventory.h):
1. Contains function prototypes and constants used in the inventory system.
2. Defines the struct Product to hold product information.
3. Declares the functions 'addProduct', 'displayInventory', 'saveInventory', and 'loadInventory'.
# Source File (inventory.c):
1. Implements the functions declared in 'inventory.h'.
2. Contains a global array inventory to store product data and a variable 'num_products' to track the number of products in the inventory.
3. 'addProduct' allows adding new products to the inventory.
4. 'displayInventory' shows the existing products in a tabular format.
5. 'saveInventory' writes the inventory data to a text file named "inventory.txt".
6. 'loadInventory' loads the inventory data from "inventory.txt" if the file exists.
# Main Function (main.c):
1. Acts as the program's entry point and contains the user interface.
2. Displays a menu with options to add a product, display inventory, save data, or exit.
3. When the user selects an option, the corresponding function is called to perform the desired action.
# Data Persistence:
The program uses the 'saveInventory' and 'loadInventory' functions to provide data persistence. The inventory data is saved to the "inventory.txt" file when the user chooses to save or exit the program. The data is loaded from the file when the program starts, ensuring that the inventory data is retained between program runs.
