# Inventory Management System

This project, developed during the 2nd semester C Programming course, is an Inventory Management System in C. It was a collaborative effort by Vardhan Suroshi, Rohith Nagesh, and Hardhik Benedict.

## Overview

The Inventory Management System is designed to assist businesses in effectively tracking, managing, and maintaining control over their product inventory. The system is composed of three primary files: `inventory.h` (header file), `inventory.c` (source file), and `main.c` (main file).

## Key Features

- **Modular Structure**: The code is organized into separate modules for improved readability and maintainability.

- **Data Persistence**: The system saves and loads inventory data to/from a text file (`inventory.txt`) to ensure data continuity between program runs.

- **Structures**: It defines a product structure (`struct Product`) to hold essential information about each product.

- **User Interface**: The user interacts with the system through a menu-driven interface, providing options to add products, display inventory, save data, or exit.

## Core Functions

- `addProduct()`: Adds new products to the inventory.

- `displayInventory()`: Displays the existing products in a tabular format.

- `saveInventory()`: Writes the inventory data to the `inventory.txt` file.

- `loadInventory()`: Loads inventory data from `inventory.txt` when the program starts.

## Key Takeaways

- **Modular Programming**: The code is organized into modules for readability and maintainability.

- **Header Files**: The `inventory.h` header file contains function prototypes and constants shared across source files.

- **Structures**: `struct Product` holds product information.

- **User Input**: The program uses a menu-based interface with a `while` loop to process user input.

- **File Handling**: The system uses file operations to save and load inventory data from `inventory.txt`.

This Inventory Management System efficiently handles product data, making it a valuable tool for businesses.
