#include "Can.h"

Can::Can(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier, double contentVolume)
    : Product(productID, name, price, quantity, supplier), contentVolume(contentVolume) {}

double Can::getContentVolume() const {
    return contentVolume;
}



