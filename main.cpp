#include <iostream>
#include <string>
#include "Supplier.h"
#include "Product.h"
#include "Can.h"
#include "Dairy.h"
#include "Meat.h"

const int MAX_PRODUCTS = 100; // Maximum number of products allowed in the inventory.
Product* inventory[MAX_PRODUCTS]; // Array to store pointers to Product objects.
int productCount = 0; // Counter to track the number of products in the inventory.

// Function to display the main menu options.
void showMenu() {
    std::cout << "\n=== MAIN MENU ===\n";
    std::cout << "1. Add a canned product\n";
    std::cout << "2. Add a dairy product\n";
    std::cout << "3. Add a meat product\n";
    std::cout << "4. Show all products\n";
    std::cout << "5. Search for a product by ID\n";
    std::cout << "6. Add stock to a product\n";
    std::cout << "7. Remove stock from a product\n";
    std::cout << "8. Exit\n";
    std::cout << "Select an option: ";
}

// Function to display all products in the inventory.
void showInventory() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
        return;
    }

    std::cout << "\n=== INVENTORY ===\n";
    for (int i = 0; i < productCount; i++) {
        // Display product details using class methods.
        std::cout << "Product " << i + 1 << ": " << inventory[i]->getName()
                  << " (ID: " << inventory[i]->getProductID()
                  << ", Quantity: " << inventory[i]->getQuantity()
                  << ", Price: $" << inventory[i]->getPrice() << ")\n";
    }
}

// Function to search for a product by its ID.
void searchProductByID() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
        return;
    }

    std::string searchID;
    std::cout << "Enter the product ID: ";
    std::cin.ignore();
    std::getline(std::cin, searchID);

    // Iterate through the inventory to find a matching product.
    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == searchID) {
            // Display the product's details.
            std::cout << "Product found:\n";
            std::cout << "Name: " << inventory[i]->getName() << "\n";
            std::cout << "ID: " << inventory[i]->getProductID() << "\n";
            std::cout << "Price: $" << inventory[i]->getPrice() << "\n";
            std::cout << "Quantity: " << inventory[i]->getQuantity() << "\n";
            std::cout << "Supplier: " << inventory[i]->getSupplier().getName() << "\n";
            return;
        }
    }
    std::cout << "Product with ID " << searchID << " not found.\n";
}

// Function to add stock to an existing product.
void addStockToProduct() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
        return;
    }

    std::string searchID;
    int quantity;
    std::cout << "Enter the product ID: ";
    std::cin.ignore();
    std::getline(std::cin, searchID);

    // Find the product in the inventory.
    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == searchID) {
            std::cout << "Enter the quantity to add: ";
            std::cin >> quantity;

            // Add stock using the `addStock` method.
            inventory[i]->addStock(quantity);
            std::cout << "Stock added successfully. New quantity: " << inventory[i]->getQuantity() << "\n";
            return;
        }
    }
    std::cout << "Product with ID " << searchID << " not found.\n";
}

// Function to remove stock from an existing product.
void removeStockFromProduct() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
        return;
    }

    std::string searchID;
    int quantity;
    std::cout << "Enter the product ID: ";
    std::cin.ignore();
    std::getline(std::cin, searchID);

    // Find the product in the inventory.
    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == searchID) {
            std::cout << "Enter the quantity to remove: ";
            std::cin >> quantity;

            // Remove stock using the `removeStock` method.
            inventory[i]->removeStock(quantity);
            std::cout << "Stock removed successfully. New quantity: " << inventory[i]->getQuantity() << "\n";
            return;
        }
    }
    std::cout << "Product with ID " << searchID << " not found.\n";
}

int main() {
    int option; // Variable to store the user's menu selection.

    do {
        showMenu(); // Display the menu.
        std::cin >> option;

        if (option == 1) { // Add a canned product.
            // Code to add a canned product (same as before).
        } 
        else if (option == 2) { // Add a dairy product.
            // Code to add a dairy product (same as before).
        } 
        else if (option == 3) { // Add a meat product.
            // Code to add a meat product (same as before).
        } 
        else if (option == 4) { // Show all products.
            showInventory();
        } 
        else if (option == 5) { // Search for a product by ID.
            searchProductByID();
        } 
        else if (option == 6) { // Add stock to a product.
            addStockToProduct();
        } 
        else if (option == 7) { // Remove stock from a product.
            removeStockFromProduct();
        } 
        else if (option == 8) { // Exit the program.
            std::cout << "Exiting the program...\n";
        } 
        else {
            std::cout << "Invalid option. Try again.\n";
        }
    } while (option != 8);

    // Free memory allocated for products in the inventory.
    for (int i = 0; i < productCount; i++) {
        delete inventory[i];
    }

    return 0;
}
