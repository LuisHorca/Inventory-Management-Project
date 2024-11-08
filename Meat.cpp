#include "Meat.h"

Meat::Meat() 
    : Product(), 
      cutType(""), 
      isFrozen(false) {}

Meat::Meat(const std::string& productID, const std::string& name, double price, int quantity, const std::string& cutType, bool isFrozen)
    : Product(productID, name, price, quantity), 
      cutType(cutType), 
      isFrozen(isFrozen) {}

std::string Meat::getCutType() const {
    return cutType;
}

bool Meat::getIsFrozen() const {
    return isFrozen;
}
