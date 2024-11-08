#include "Product.h"


Product::Product(
    const std::string &id,
    const std::string &name,
    double price,
    int quantity
) : productID(id), name(name), price(price), quantity(quantity) {}


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
    this->quantity -= quantity;
}
