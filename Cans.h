#ifndef CANS_H
#define CANS_H

#include "Product.h"

class Cans : public Product {
private:
    double contentVolume;

public:
    Cans();
    Cans(const std::string& productID, const std::string& name, double price, int quantity, double contentVolume);

    double getContentVolume() const;
};

#endif
