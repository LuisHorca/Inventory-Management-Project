#include "Dairy.h"

Dairy::Dairy(std::string productID, std::string name, double price, int quantity, Supplier supplier, bool isRefrigerated, double volume)
    : Product(productID, name, price, quantity, supplier), isRefrigerated(isRefrigerated), volume(volume) {}

bool Dairy::getIsRefrigerated() const {
    return isRefrigerated;
}

void Dairy::setIsRefrigerated(bool isRefrigerated) {
    this->isRefrigerated = isRefrigerated;
}

double Dairy::getVolume() const {
    return volume;
}

void Dairy::setVolume(double volume) {
    this->volume = volume;
}

