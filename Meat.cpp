#include "Meat.h"

Meat::Meat(std::string productID, std::string name, double price, int quantity, Supplier supplier, std::string cutType, bool isFrozen)
    : Product(productID, name, price, quantity, supplier), cutType(cutType), isFrozen(isFrozen) {}

std::string Meat::getCutType() const {
    return cutType;
}

void Meat::setCutType(std::string cutType) {
    this->cutType = cutType;
}

bool Meat::getIsFrozen() const {
    return isFrozen;
}

void Meat::setIsFrozen(bool isFrozen) {
    this->isFrozen = isFrozen;
}
