#include "Product.h"

Product::Product(std::string productID, std::string name, double price, int quantity, Supplier supplier) {}

double Product::getPrice() {
    return 0.0;
}

int Product::getQuantity() {
    return 0;
}

void Product::setPrice(double newPrice) {}

void Product::addStock(int qty) {}

void Product::removeStock(int qty) {}

Supplier Product::getSupplier() {
    return Supplier();
}

