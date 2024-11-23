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
    std::cout << "8. Add stock to a product\n";
    std::cout << "9. Remove stock from a product\n";
    std::cout << "10. Exit\n";
    std::cout << "Select an option: ";
}

// Adds a canned product to the inventory.
void addCannedProduct() {
    std::string id, name, supplierName, supplierContact;
    double price, volume;
    int quantity;

    std::cin.ignore();
    std::cout << "Enter product ID: ";
    std::getline(std::cin, id);
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    std::cout << "Enter volume (liters): ";
    std::cin >> volume;
    std::cin.ignore(); // Clear input buffer
    std::cout << "Enter supplier name: ";
    std::getline(std::cin, supplierName);
    std::cout << "Enter supplier contact: ";
    std::getline(std::cin, supplierContact);

    inventory[productCount++] = new Can(id, name, price, quantity, Supplier(supplierName, supplierContact), volume);
    std::cout << "Canned product added.\n";
}

// Adds a dairy product to the inventory.
void addDairyProduct() {
    std::string id, name, supplierName, supplierContact;
    double price, volume;
    int quantity;
    bool refrigerated;

    std::cin.ignore();
    std::cout << "Enter product ID: ";
    std::getline(std::cin, id);
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    std::cout << "Is it refrigerated? (1 = Yes, 0 = No): ";
    std::cin >> refrigerated;
    std::cout << "Enter volume (liters): ";
    std::cin >> volume;
    std::cin.ignore(); // Clear input buffer
    std::cout << "Enter supplier name: ";
    std::getline(std::cin, supplierName);
    std::cout << "Enter supplier contact: ";
    std::getline(std::cin, supplierContact);

    inventory[productCount++] = new Dairy(id, name, price, quantity, Supplier(supplierName, supplierContact), refrigerated, volume);
    std::cout << "Dairy product added.\n";
}

// Adds a meat product to the inventory.
void addMeatProduct() {
    std::string id, name, cutType, supplierName, supplierContact;
    double price;
    int quantity;
    bool frozen;

    std::cin.ignore();
    std::cout << "Enter product ID: ";
    std::getline(std::cin, id);
    std::cout << "Enter name: ";
    std::getline(std::cin, name);
    std::cout << "Enter price: ";
    std::cin >> price;
    std::cout << "Enter quantity: ";
    std::cin >> quantity;
    std::cin.ignore(); // Clear input buffer
    std::cout << "Enter cut type: ";
    std::getline(std::cin, cutType);
    std::cout << "Is it frozen? (1 = Yes, 0 = No): ";
    std::cin >> frozen;
    std::cin.ignore(); // Clear input buffer
    std::cout << "Enter supplier name: ";
    std::getline(std::cin, supplierName);
    std::cout << "Enter supplier contact: ";
    std::getline(std::cin, supplierContact);

    inventory[productCount++] = new Meat(id, name, price, quantity, Supplier(supplierName, supplierContact), cutType, frozen);
    std::cout << "Meat product added.\n";
}

// Displays all products in the inventory, including supplier details.
void showInventory() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
    } else {
        for (int i = 0; i < productCount; i++) {
            Supplier supplier = inventory[i]->getSupplier();
            std::cout << "Product " << i + 1 << ":\n";
            std::cout << "  Name: " << inventory[i]->getName() << "\n";
            std::cout << "  ID: " << inventory[i]->getProductID() << "\n";
            std::cout << "  Price: $" << inventory[i]->getPrice() << "\n";
            std::cout << "  Quantity: " << inventory[i]->getQuantity() << "\n";
            std::cout << "  Supplier: " << supplier.getName() << " (Contact: " << supplier.getContactInfo() << ")\n";
        }
    }
}

// Shows the supplier details for a specific product.
void showSupplierDetails() {
    std::string id;
    std::cin.ignore();
    std::cout << "Enter the product ID to view supplier details: ";
    std::getline(std::cin, id);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            Supplier supplier = inventory[i]->getSupplier();
            std::cout << "Supplier Name: " << supplier.getName() << "\n";
            std::cout << "Supplier Contact: " << supplier.getContactInfo() << "\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

// Updates the supplier details for a specific product.
void updateSupplierDetails() {
    std::string id, newSupplierName, newSupplierContact;
    std::cin.ignore();
    std::cout << "Enter the product ID to update supplier details: ";
    std::getline(std::cin, id);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            std::cout << "Enter new supplier name: ";
            std::getline(std::cin, newSupplierName);
            std::cout << "Enter new supplier contact: ";
            std::getline(std::cin, newSupplierContact);

            Supplier updatedSupplier(newSupplierName, newSupplierContact);
            inventory[i]->setSupplier(updatedSupplier);
            std::cout << "Supplier details updated successfully.\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

// Adds stock to a product in the inventory.
void addStockToProduct() {
    std::string id;
    int amount;

    std::cin.ignore();
    std::cout << "Enter the product ID to add stock: ";
    std::getline(std::cin, id);
    std::cout << "Enter the amount to add: ";
    std::cin >> amount;

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            inventory[i]->addStock(amount);
            std::cout << "Stock added successfully.\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

// Removes stock from a product in the inventory.
void removeStockFromProduct() {
    std::string id;
    int amount;

    std::cin.ignore();
    std::cout << "Enter the product ID to remove stock: ";
    std::getline(std::cin, id);
    std::cout << "Enter the amount to remove: ";
    std::cin >> amount;

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            inventory[i]->removeStock(amount);
            std::cout << "Stock removed successfully.\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

int main() {
    int option = 0;

    while (option != 10) {
        showMenu();
        std::cin >> option;

        if (option == 1) {
            addCannedProduct();
        } else if (option == 2) {
            addDairyProduct();
        } else if (option == 3) {
            addMeatProduct();
        } else if (option == 4) {
            showInventory();
        } else if (option == 5) {
            updateProductDetails();
        } else if (option == 6) {
            showSupplierDetails();
        } else if (option == 7) {
            updateSupplierDetails();
        } else if (option == 8) {
            addStockToProduct();
        } else if (option == 9) {
            removeStockFromProduct();
        } else if (option == 10) {
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

