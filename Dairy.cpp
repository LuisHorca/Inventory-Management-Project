#include "Dairy.h"

Dairy::Dairy() 
    : Product(), 
      isRefrigerated(false), 
      volume(0.0) {}

Dairy::Dairy(const std::string& productID, const std::string& name, double price, int quantity, bool isRefrigerated, double volume)
    : Product(productID, name, price, quantity), 
      isRefrigerated(isRefrigerated), 
      volume(volume) {}

double Dairy::getVolume() const {
    return volume;
}

bool Dairy::getIsRefrigerated() const {
    return isRefrigerated;
}
