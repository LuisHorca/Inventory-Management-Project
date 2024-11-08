#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int productID;              
    double price;               
    int quantity;              

public:
    Product(
        const std::string &id,
        const std::string &name,
        double price,
        int quantity
    );

    double getPrice() const;
    int getQuantity() const;
    void setPrice(double newPrice);
    void addStock(int quantity);
    void removeStock(int quantity);
};

#endif 
