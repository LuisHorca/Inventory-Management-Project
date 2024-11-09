#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include "Supplier.h"

class Product {
private:
    std::string productID;
    std::string name;
    double price;
    int quantity;
    Supplier supplier;

public:
    Product(std::string productID, std::string name, double price, int quantity, Supplier supplier);

    double getPrice();
    int getQuantity();
    void setPrice(double newPrice);
    void addStock(int quantity);
    void removeStock(int quantity);
    Supplier getSupplier();
};

#endif

