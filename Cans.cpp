#include "Cans.h"

Cans::Cans() 
    : Product(), 
      contentVolume(0.0) {}

Cans::Cans(const std::string& productID, const std::string& name, double price, int quantity, double contentVolume)
    : Product(productID, name, price, quantity), 
      contentVolume(contentVolume) {}

double Cans::getContentVolume() const {
    return contentVolume;
}

