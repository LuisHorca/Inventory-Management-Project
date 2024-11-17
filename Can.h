#ifndef CAN_H
#define CAN_H

#include "Product.h"

class Can : public Product {
private:
    double contentVolume;

public:
    Can(std::string productID, std::string name, double price, int quantity, Supplier supplier, double contentVolume);

    double getContentVolume() const;
    void setContentVolume(double contentVolume);
};

#endif 


