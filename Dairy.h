#ifndef DAIRY_H
#define DAIRY_H

#include "Product.h"

class Dairy : public Product {
private:
    bool isRefrigerated;
    double volume;

public:
    Dairy(std::string productID, std::string name, double price, int quantity, Supplier supplier, bool isRefrigerated, double volume);

    bool getIsRefrigerated() const;
    void setIsRefrigerated(bool isRefrigerated);

    double getVolume() const;
    void setVolume(double volume);
};

#endif 
 
