#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "Supplier.h"

class Product {
protected:
    std::string productID;
    std::string name;
    double price;
    int quantity;
    Supplier supplier;

public:
    // Constructors
    Product();
    Product(const std::string& productID, const std::string& name, double price, int quantity, const Supplier& supplier);

    // Getters
    std::string getProductID() const;
    std::string getName() const;
    double getPrice() const;
    int getQuantity() const;
    Supplier getSupplier() const; // Returns a copy of the supplier

    // Setters
    void setProductID(const std::string& productID);
    void setName(const std::string& name);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setSupplier(const Supplier& supplier); // Updates the supplier

    // Inventory management
    void addStock(int amount);
    void removeStock(int amount);

    // Virtual destructor for polymorphism
    virtual ~Product() {}
};

#endif // PRODUCT_H





