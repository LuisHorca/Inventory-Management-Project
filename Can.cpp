#include "Can.h"

Can::Can(std::string productID, std::string name, double price, int quantity, Supplier supplier, double contentVolume)
    : Product(productID, name, price, quantity, supplier), contentVolume(contentVolume) {}

double Can::getContentVolume() const {
    return contentVolume;
}

void Can::setContentVolume(double contentVolume) {
    this->contentVolume = contentVolume;
}




