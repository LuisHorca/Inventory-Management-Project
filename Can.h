#ifndef CAN_H
#define CAN_H

#include "Product.h"

// Class Can: Represents canned products with specific attributes.
class Can : public Product {
private:
    double contentVolume; // Volume of the canned product in liters.

public:
    // Constructor to initialize a canned product.
    Can(std::string productID, std::string name, double price, int quantity, Supplier supplier, double contentVolume);

    // Getters and setters for contentVolume.
    double getContentVolume() const; // Returns the content volume.
    void setContentVolume(double contentVolume); // Sets the content volume.
};

#endif


