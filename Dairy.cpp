#include "Dairy.h"

// Constructor: Initializes a dairy product with specific attributes.
Dairy::Dairy(std::string productID, std::string name, double price, int quantity, Supplier supplier, bool isRefrigerated, double volume)
    : Product(productID, name, price, quantity, supplier), isRefrigerated(isRefrigerated), volume(volume) {}

// Getter for refrigeration status.
bool Dairy::getIsRefrigerated() const { return isRefrigerated; }

// Setter for refrigeration status.
void Dairy::setIsRefrigerated(bool isRefrigerated) { this->isRefrigerated = isRefrigerated; }

// Getter for volume.
double Dairy::getVolume() const { return volume; }

// Setter for volume.
void Dairy::setVolume(double volume) { this->volume = volume; }
