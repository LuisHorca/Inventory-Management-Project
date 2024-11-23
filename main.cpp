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
    std::cout << "5. Update product details\n";
    std::cout << "6. Add stock to a product\n";
    std::cout << "7. Remove stock from a product\n";
    std::cout << "8. Show supplier details\n";
    std::cout << "9. Update supplier details\n";
    std::cout << "10. Exit\n";
    std::cout << "Select an option: ";
}

// Function to add a canned product.
void addCannedProduct() {
    std::string id, name;
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

    inventory[productCount++] = new Can(id, name, price, quantity, Supplier("Default Supplier", "Contact Info"), volume);
    std::cout << "Canned product added.\n";
}

// Function to add a dairy product.
void addDairyProduct() {
    std::string id, name;
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

    inventory[productCount++] = new Dairy(id, name, price, quantity, Supplier("Default Supplier", "Contact Info"), refrigerated, volume);
    std::cout << "Dairy product added.\n";
}

// Function to add a meat product.
void addMeatProduct() {
    std::string id, name, cutType;
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
    std::cin.ignore();
    std::cout << "Enter cut type: ";
    std::getline(std::cin, cutType);
    std::cout << "Is it frozen? (1 = Yes, 0 = No): ";
    std::cin >> frozen;

    inventory[productCount++] = new Meat(id, name, price, quantity, Supplier("Default Supplier", "Contact Info"), cutType, frozen);
    std::cout << "Meat product added.\n";
}

// Function to display all products in the inventory.
void showInventory() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
    } else {
        for (int i = 0; i < productCount; i++) {
            std::cout << "Product " << i + 1 << ": " << inventory[i]->getName()
                      << " (ID: " << inventory[i]->getProductID()
                      << ", Price: $" << inventory[i]->getPrice()
                      << ", Quantity: " << inventory[i]->getQuantity() << ")\n";
        }
    }
}

// Function to update product details.
void updateProductDetails() {
    std::string id, newName;
    double newPrice;
    int newQuantity;

    std::cin.ignore();
    std::cout << "Enter the product ID to update: ";
    std::getline(std::cin, id);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            std::cout << "Enter new name: ";
            std::getline(std::cin, newName);
            std::cout << "Enter new price: ";
            std::cin >> newPrice;
            std::cout << "Enter new quantity: ";
            std::cin >> newQuantity;

            inventory[i]->setName(newName);
            inventory[i]->setPrice(newPrice);
            inventory[i]->setQuantity(newQuantity);
            std::cout << "Product details updated.\n";
            return;
        }
    }
    std::cout << "Product with ID " << id << " not found.\n";
}

// Function to show supplier details.
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

// Function to update supplier details.
void updateSupplierDetails() {
    std::string id, newName, newContactInfo;
    std::cin.ignore();
    std::cout << "Enter the product ID to update supplier details: ";
    std::getline(std::cin, id);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == id) {
            Supplier& supplier = inventory[i]->getSupplier(); // Access supplier by reference.
            std::cout << "Enter new supplier name: ";
            std::getline(std::cin, newName);
            std::cout << "Enter new supplier contact: ";
            std::getline(std::cin, newContactInfo);

            supplier.setName(newName);
            supplier.setContactInfo(newContactInfo);
            std::cout << "Supplier details updated.\n";
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
            // Code for adding stock (already provided above).
        } else if (option == 7) {
            // Code for removing stock.
        } else if (option == 8) {
            showSupplierDetails();
        } else if (option == 9) {
            updateSupplierDetails();
        } else if (option == 10) {
            std::cout << "Exiting program...\n";
        } else {
            std::cout << "Invalid option. Try again.\n";
        }
    }

    for (int i = 0; i < productCount; i++) {
        delete inventory[i];
    }

    return 0;
}

