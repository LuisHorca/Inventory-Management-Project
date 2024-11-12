#ifndef CAN_H
#define CAN_H

#include "Product.h"

class Can : public Product {
private:
    double contentVolume;

public:
    Can(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier, double contentVolume);

    double getContentVolume() const;
};

#endif // CAN_H


