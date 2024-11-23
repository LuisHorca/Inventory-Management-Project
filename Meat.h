#ifndef MEAT_H
#define MEAT_H

#include "Product.h"

// Class Meat: Represents meat products with specific attributes.
class Meat : public Product {
private:
    std::string cutType; // Type of meat cut.
    bool isFrozen;       // Indicates if the meat is frozen.

public:
    // Constructor to initialize a meat product.
    Meat(std::string productID, std::string name, double price, int quantity, Supplier supplier, std::string cutType, bool isFrozen);

    // Getters and setters for attributes.
    std::string getCutType() const; // Returns the type of cut.
    void setCutType(std::string cutType); // Sets the type of cut.

    bool getIsFrozen() const; // Returns the frozen status.
    void setIsFrozen(bool isFrozen); // Sets the frozen status.
};

#endif
