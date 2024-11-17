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
    Product(std::string productID, std::string name, double price, int quantity, Supplier supplier);
    Product();

    std::string getProductID() const;
    void setProductID(std::string productID);

    std::string getName() const;
    void setName(std::string name);

    double getPrice() const;
    void setPrice(double price);

    int getQuantity() const;
    void setQuantity(int quantity);

    Supplier getSupplier() const;
    void setSupplier(Supplier supplier);

    void addStock(int quantity);
    void removeStock(int quantity);
};

#endif 



