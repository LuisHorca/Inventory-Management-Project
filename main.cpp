#include <iostream>
#include "Supplier.h"
#include "Product.h"
#include "Can.h"
#include "Dairy.h"
#include "Meat.h"

const int MAX_PRODUCTS = 100; // Máximo número de productos
Product* inventory[MAX_PRODUCTS]; // Arreglo para el inventario
int productCount = 0; // Contador de productos en el inventario

// Función para mostrar el menú
void showMenu() {
    std::cout << "\n=== MAIN MENU ===\n";
    std::cout << "1. Add a canned product\n";
    std::cout << "2. Add a dairy product\n";
    std::cout << "3. Add a meat product\n";
    std::cout << "4. Show all products\n";
    std::cout << "5. Search for a product by ID\n";
    std::cout << "6. Exit\n";
    std::cout << "Select an option: ";
}

// Función para mostrar el inventario
void showInventory() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
        return;
    }

    std::cout << "\n=== INVENTORY ===\n";
    for (int i = 0; i < productCount; i++) {
        std::cout << "Product " << i + 1 << ": " << inventory[i]->getName()
                  << " (ID: " << inventory[i]->getProductID()
                  << ", Quantity: " << inventory[i]->getQuantity()
                  << ", Price: $" << inventory[i]->getPrice() << ")\n";
    }
}

// Función para buscar un producto por ID
void searchProductByID() {
    if (productCount == 0) {
        std::cout << "The inventory is empty.\n";
        return;
    }

    std::string searchID;
    std::cout << "Enter the product ID: ";
    std::cin.ignore();
    std::getline(std::cin, searchID);

    for (int i = 0; i < productCount; i++) {
        if (inventory[i]->getProductID() == searchID) {
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

int main() {
    int option;

    do {
        showMenu();
        std::cin >> option;

        if (option == 1) { // Add a canned product
            if (productCount >= MAX_PRODUCTS) {
                std::cout << "Inventory is full.\n";
                continue;
            }
            std::string id, name;
            double price, volume;
            int quantity;
            std::cout << "Enter product ID: ";
            std::cin.ignore();
            std::getline(std::cin, id);
            std::cout << "Enter name: ";
            std::getline(std::cin, name);
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
            std::cout << "Enter volume (in liters): ";
            std::cin >> volume;
            inventory[productCount++] = new Can(id, name, price, quantity, Supplier(), volume);
            std::cout << "Canned product added successfully.\n";
        } 
        else if (option == 2) { // Add a dairy product
            if (productCount >= MAX_PRODUCTS) {
                std::cout << "Inventory is full.\n";
                continue;
            }
            std::string id, name;
            double price, volume;
            int quantity;
            bool refrigerated;
            std::cout << "Enter product ID: ";
            std::cin.ignore();
            std::getline(std::cin, id);
            std::cout << "Enter name: ";
            std::getline(std::cin, name);
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
            std::cout << "Is it refrigerated? (1 = Yes, 0 = No): ";
            std::cin >> refrigerated;
            std::cout << "Enter volume (in liters): ";
            std::cin >> volume;
            inventory[productCount++] = new Dairy(id, name, price, quantity, Supplier(), refrigerated, volume);
            std::cout << "Dairy product added successfully.\n";
        } 
        else if (option == 3) { // Add a meat product
            if (productCount >= MAX_PRODUCTS) {
                std::cout << "Inventory is full.\n";
                continue;
            }
            std::string id, name, cutType;
            double price;
            int quantity;
            bool frozen;
            std::cout << "Enter product ID: ";
            std::cin.ignore();
            std::getline(std::cin, id);
            std::cout << "Enter name: ";
            std::getline(std::cin, name);
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cout << "Enter quantity: ";
            std::cin >> quantity;
            std::cout << "Enter cut type: ";
            std::cin.ignore();
            std::getline(std::cin, cutType);
            std::cout << "Is it frozen? (1 = Yes, 0 = No): ";
            std::cin >> frozen;
            inventory[productCount++] = new Meat(id, name, price, quantity, Supplier(), cutType, frozen);
            std::cout << "Meat product added successfully.\n";
        } 
        else if (option == 4) { // Show all products
            showInventory();
        } 
        else if (option == 5) { // Search for a product by ID
            searchProductByID();
        } 
        else if (option == 6) {
            std::cout << "Exiting the program...\n";
        } 
        else {
            std::cout << "Invalid option. Try again.\n";
        }
    } while (option != 6);

    // Free memory
    for (int i = 0; i < productCount; i++) {
        delete inventory[i];
    }

    return 0;
}
