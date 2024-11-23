#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "Supplier.h"

// The Product class serves as the base class for all products in the inventory.
class Product {
protected:
    std::string productID; // Unique identifier for the product.
    std::string name;      // Name of the product.
    double price;          // Price of the product.
    int quantity;          // Quantity of the product in stock.
    Supplier supplier;     // Supplier of the product.

public:
    // Default constructor
    Product();

    // Parameterized constructor to initialize all attributes.
    Product(const std::string& productID, const std::string& name, double price, int quantity, const Supplier& supplier);

    // Getter methods to access product attributes.
    std::string getProductID() const; // Returns the product ID.
    std::string getName() const;      // Returns the name of the product.
    double getPrice() const;          // Returns the price of the product.
    int getQuantity() const;          // Returns the quantity of the product.
    Supplier getSupplier() const;     // Returns a copy of the supplier.

    // Setter methods to modify product attributes.
    void setProductID(const std::string& productID); // Sets the product ID.
    void setName(const std::string& name);           // Sets the name of the product.
    void setPrice(double price);                     // Sets the price of the product.
    void setQuantity(int quantity);                  // Sets the quantity of the product.
    void setSupplier(const Supplier& supplier);      // Updates the supplier.

    // Methods to manage inventory stock.
    void addStock(int amount);    // Adds a specified amount to the product stock.
    void removeStock(int amount); // Removes a specified amount from the product stock.

    // Virtual destructor to allow proper cleanup in derived classes.
    virtual ~Product() {}
};

#endif // PRODUCT_H




