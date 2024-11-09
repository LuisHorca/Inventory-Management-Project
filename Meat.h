#ifndef MEAT_H
#define MEAT_H

#include "Product.h"
#include <string>

class Meat : public Product {
private:
    std::string cutType;
    bool isFrozen;

public:
    Meat();
    Meat(std::string productID, std::string name, double price, int quantity, Supplier supplier, std::string cutType, bool isFrozen);

    std::string getCutType();
    bool getIsFrozen();
};

#endif
