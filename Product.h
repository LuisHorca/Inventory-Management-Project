#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "Supplier.h"

// Class Product: Base class for all products in the inventory.
class Product {
protected:
    std::string productID;  // Unique identifier for the product.
    std::string name;       // Product name.
    double price;           // Product price.
    int quantity;           // Quantity in stock.
    Supplier supplier;      // Supplier of the product.

public:
    // Constructors to initialize a product.
    Product(std::string productID, std::string name, double price, int quantity, Supplier supplier);
    Product(); // Default constructor.

    // Getters and setters for product attributes.
    std::string getProductID() const; // Returns the product ID.
    void setProductID(std::string productID); // Sets the product ID.

    std::string getName() const; // Returns the product name.
    void setName(std::string name); // Sets the product name.

    double getPrice() const; // Returns the product price.
    void setPrice(double price); // Sets the product price.

    int getQuantity() const; // Returns the product quantity.
    void setQuantity(int quantity); // Sets the product quantity.

    Supplier getSupplier() const; // Returns the product's supplier.
    void setSupplier(Supplier supplier); // Sets the product's supplier.

    // Methods to manage stock.
    void addStock(int quantity); // Increases product quantity.
    void removeStock(int quantity); // Decreases product quantity.
};

#endif




