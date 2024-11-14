#include "Dairy.h"

Dairy::Dairy(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier, bool isRefrigerated, double volume)
    : Product(productID, name, price, quantity, supplier), isRefrigerated(isRefrigerated), volume(volume) {}

double Dairy::getVolume() const {
    return volume;
}

bool Dairy::getIsRefrigerated() const {
    return isRefrigerated;
}
