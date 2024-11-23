#include "Can.h"

// Constructor: Initializes a canned product with specific attributes.
Can::Can(std::string productID, std::string name, double price, int quantity, Supplier supplier, double contentVolume)
    : Product(productID, name, price, quantity, supplier), contentVolume(contentVolume) {}

// Getter for content volume.
double Can::getContentVolume() const { return contentVolume; }

// Setter for content volume.
void Can::setContentVolume(double contentVolume) { this->contentVolume = contentVolume; }


