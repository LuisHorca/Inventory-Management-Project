#include "Meat.h"

// Constructor: Initializes a meat product with specific attributes.
Meat::Meat(std::string productID, std::string name, double price, int quantity, Supplier supplier, std::string cutType, bool isFrozen)
    : Product(productID, name, price, quantity, supplier), cutType(cutType), isFrozen(isFrozen) {}

// Getter for the type of cut.
std::string Meat::getCutType() const { return cutType; }

// Setter for the type of cut.
void Meat::setCutType(std::string cutType) { this->cutType = cutType; }

// Getter for the frozen status.
bool Meat::getIsFrozen() const { return isFrozen; }

// Setter for the frozen status.
void Meat::setIsFrozen(bool isFrozen) { this->isFrozen = isFrozen; }
