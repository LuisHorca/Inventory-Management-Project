#ifndef MEAT_H
#define MEAT_H

#include "Product.h"
#include <string>

class Meat : public Product {
private:
    std::string cutType;
    bool isFrozen;

public:
    Meat(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier, const std::string &cutType, bool isFrozen);

    std::string getCutType() const;
    bool getIsFrozen() const;
};

#endif 

