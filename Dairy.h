#ifndef DAIRY_H
#define DAIRY_H

#include "Product.h"

// Class Dairy: Represents dairy products with refrigeration and volume attributes.
class Dairy : public Product {
private:
    bool isRefrigerated; // Indicates if the product requires refrigeration.
    double volume;       // Volume of the dairy product in liters.

public:
    // Constructor to initialize a dairy product.
    Dairy(std::string productID, std::string name, double price, int quantity, Supplier supplier, bool isRefrigerated, double volume);

    // Getters and setters for attributes.
    bool getIsRefrigerated() const; // Returns the refrigeration status.
    void setIsRefrigerated(bool isRefrigerated); // Sets the refrigeration status.

    double getVolume() const; // Returns the volume.
    void setVolume(double volume); // Sets the volume.
};

#endif
