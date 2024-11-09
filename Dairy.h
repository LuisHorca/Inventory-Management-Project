#ifndef DAIRY_H
#define DAIRY_H

#include "Product.h"

class Dairy : public Product {
private:
    bool isRefrigerated;
    double volume;

public:
    Dairy();
    Dairy(std::string productID, std::string name, double price, int quantity, Supplier supplier, bool isRefrigerated, double volume);

    double getVolume();
    bool getIsRefrigerated();
};

#endif

