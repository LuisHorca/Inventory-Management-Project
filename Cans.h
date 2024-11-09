#ifndef CANS_H
#define CANS_H

#include "Product.h"

class Cans : public Product {
private:
    double contentVolume;

public:
    Cans();
    Cans(std::string productID, std::string name, double price, int quantity, Supplier supplier, double contentVolume);

    double getContentVolume();
};

#endif

