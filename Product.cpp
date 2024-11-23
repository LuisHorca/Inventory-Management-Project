#include "Product.h"

// Constructor: Initializes a product with specified attributes.
Product::Product(std::string productID, std::string name, double price, int quantity, Supplier supplier)
    : productID(productID), name(name), price(price), quantity(quantity), supplier(supplier) {}

// Default constructor: Initializes an empty product.
Product::Product()
    : productID(""), name(""), price(0.0), quantity(0), supplier(Supplier()) {}

// --- Getters and Setters ---

// Get and set the product ID.
std::string Product::getProductID() const {
    return productID;
}
void Product::setProductID(std::string productID) {
    this->productID = productID;
}

// Get and set the product name.
std::string Product::getName() const {
    return name;
}
void Product::setName(std::string name) {
    this->name = name;
}

// Get and set the product price.
double Product::getPrice() const {
    return price;
}
void Product::setPrice(double price) {
    this->price = price;
}

// Get and set the product quantity.
int Product::getQuantity() const {
    return quantity;
}
void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

// Get and set the product supplier.
Supplier Product::getSupplier() const {
    return supplier;
}
void Product::setSupplier(Supplier supplier) {
    this->supplier = supplier;
}

// --- Stock Management ---

// Adds stock to the product.
void Product::addStock(int quantity) {
    this->quantity += quantity;
}

// Removes stock from the product.
void Product::removeStock(int quantity) {
    this->quantity -= quantity;
}

