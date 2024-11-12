#include "Product.h"

Product::Product(const std::string &productID, const std::string &name, double price, int quantity, const Supplier &supplier)
    : productID(productID), name(name), price(price), quantity(quantity), supplier(supplier) {}

double Product::getPrice() const {
    return price;
}

int Product::getQuantity() const {
    return quantity;
}

void Product::setPrice(double newPrice) {
    price = newPrice;
}

void Product::addStock(int quantity) {
    this->quantity += quantity;
}

void Product::removeStock(int quantity) {
    if (this->quantity >= quantity) {
        this->quantity -= quantity;
    }
}

Supplier Product::getSupplier() const {
    return supplier;
}
