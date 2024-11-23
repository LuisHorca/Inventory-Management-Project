#include <iostream>
#include <string>
#include "Supplier.h"
#include "Product.h"
#include "Can.h"
#include "Dairy.h"
#include "Meat.h"

// Constants and global variables for inventory management.
const int MAX_PRODUCTS = 100; // Maximum number of products allowed in the inventory.
Product* inventory[MAX_PRODUCTS]; // Array to store pointers to Product objects.
int productCount = 0; // Counter to track the number of products in the inventory.

// Displays the main menu options.
void showMenu() {
    std::cout << "\n=== MAIN MENU ===\n";
    std::cout << "1. Add a canned product\n";
    std::cout << "2. Add a dairy product\n";
    std::cout << "3. Add a meat product\n";
    std::cout << "4. Show all products\n";
    std::cout << "5. Update product details\n";
    std::cout << "6. Show supplier details\n";
    std::cout << "7. Update supplier details\n";
    std::cout << "8. Exit\n";
    std::cout << "Select an option: ";
}

// Displays the details of the supplier for a specific product.
void showSupplierDetails() {
    std::string id;
    std::cin.ignore();
    std::cout << "Enter the product ID to view supplier details: ";
    std::getline(std::cin, id);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            Supplier supplier = inventory[i]->getSupplier(); // Gets a copy of the supplier.
            std::cout << "Supplier Name: " << supplier.getName() << "\n";
            std::cout << "Supplier Contact: " << supplier.getContactInfo() << "\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

// Updates the supplier details for a specific product.
void updateSupplierDetails() {
    std::string id, newName, newContactInfo;
    std::cin.ignore();
    std::cout << "Enter the product ID to update supplier details: ";
    std::getline(std::cin, id);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            Supplier supplier = inventory[i]->getSupplier(); // Gets a copy of the supplier.
            std::cout << "Enter new supplier name: ";
            std::getline(std::cin, newName);
            std::cout << "Enter new supplier contact: ";
            std::getline(std::cin, newContactInfo);

            supplier.setName(newName);
            supplier.setContactInfo(newContactInfo);
            inventory[i]->setSupplier(supplier); // Updates the supplier in the product.
            std::cout << "Supplier details updated.\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

int main() {
    int option = 0;

    while (option != 8) {
        showMenu();
        std::cin >> option;

        if (option == 1) {
            // Function to add a canned product.
        } else if (option == 2) {
            // Function to add a dairy product.
        } else if (option == 3) {
            // Function to add a meat product.
        } else if (option == 4) {
            // Function to show all products.
        } else if (option == 5) {
            // Function to update product details.
        } else if (option == 6) {
            showSupplierDetails();
        } else if (option == 7) {
            updateSupplierDetails();
        } else if (option == 8) {
            std::cout << "Exiting program...\n";
        } else {
            std::cout << "Invalid option. Try again.\n";
        }
    }

    // Free memory for all dynamically allocated products.
    for (int i = 0; i < productCount; i++) {
        delete inventory[i];
    }

    return 0;
}


