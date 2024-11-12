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
    Product(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier);

    double getPrice() const;
    int getQuantity() const;
    void setPrice(double newPrice);
    void addStock(int quantity);
    void removeStock(int quantity);
    Supplier getSupplier() const;
};

#endif // PRODUCT_H


