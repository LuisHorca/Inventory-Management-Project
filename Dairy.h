#ifndef DAIRY_H
#define DAIRY_H

#include "Product.h"

class Dairy : public Product {
private:
    bool isRefrigerated;
    double volume;

public:
    Dairy(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier, bool isRefrigerated, double volume);

    double getVolume() const;
    bool getIsRefrigerated() const;
};

#endif 
