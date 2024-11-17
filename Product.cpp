#include "Product.h"

Product::Product(std::string productID, std::string name, double price, int quantity, Supplier supplier)
    : productID(productID), name(name), price(price), quantity(quantity), supplier(supplier) {}

Product::Product() : productID(""), name(""), price(0.0), quantity(0), supplier(Supplier()) {}

std::string Product::getProductID() const {
    return productID;
}

void Product::setProductID(std::string productID) {
    this->productID = productID;
}

std::string Product::getName() const {
    return name;
}

void Product::setName(std::string name) {
    this->name = name;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double price) {
    this->price = price;
}

int Product::getQuantity() const {
    return quantity;
}

void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

Supplier Product::getSupplier() const {
    return supplier;
}

void Product::setSupplier(Supplier supplier) {
    this->supplier = supplier;
}

void Product::addStock(int quantity) {
    this->quantity += quantity;
}

void Product::removeStock(int quantity) {
    this->quantity -= quantity;
}

