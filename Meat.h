#ifndef MEAT_H
#define MEAT_H

#include "Product.h"

class Meat : public Product {
private:
    std::string cutType;
    bool isFrozen;

public:
    Meat(std::string productID, std::string name, double price, int quantity, Supplier supplier, std::string cutType, bool isFrozen);

    std::string getCutType() const;
    void setCutType(std::string cutType);

    bool getIsFrozen() const;
    void setIsFrozen(bool isFrozen);
};

#endif 

