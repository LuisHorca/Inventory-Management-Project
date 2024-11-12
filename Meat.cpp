#include "Meat.h"

Meat::Meat(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier, const std::string &cutType, bool isFrozen)
    : Product(productID, name, price, quantity, supplier), cutType(cutType), isFrozen(isFrozen) {}

std::string Meat::getCutType() const {
    return cutType;
}

bool Meat::getIsFrozen() const {
    return isFrozen;
}
