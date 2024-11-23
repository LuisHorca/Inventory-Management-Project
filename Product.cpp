#include "Product.h"

// Default constructor initializes all attributes to default values.
Product::Product() : productID(""), name(""), price(0.0), quantity(0), supplier(Supplier()) {}

// Parameterized constructor initializes all attributes with provided values.
Product::Product(const std::string& productID, const std::string& name, double price, int quantity, const Supplier& supplier)
    : productID(productID), name(name), price(price), quantity(quantity), supplier(supplier) {}

// Returns the product ID.
std::string Product::getProductID() const {
    return productID;
}

// Returns the name of the product.
std::string Product::getName() const {
    return name;
}

// Returns the price of the product.
double Product::getPrice() const {
    return price;
}

// Returns the quantity of the product in stock.
int Product::getQuantity() const {
    return quantity;
}

// Returns a copy of the supplier associated with the product.
Supplier Product::getSupplier() const {
    return supplier;
}

// Sets the product ID to the provided value.
void Product::setProductID(const std::string& productID) {
    this->productID = productID;
}

// Sets the name of the product to the provided value.
void Product::setName(const std::string& name) {
    this->name = name;
}

// Sets the price of the product to the provided value.
void Product::setPrice(double price) {
    this->price = price;
}

// Sets the quantity of the product to the provided value.
void Product::setQuantity(int quantity) {
    this->quantity = quantity;
}

// Updates the supplier of the product with the provided supplier object.
void Product::setSupplier(const Supplier& supplier) {
    this->supplier = supplier;
}

// Adds the specified amount to the product stock.
void Product::addStock(int amount) {
    quantity += amount;
}

// Removes the specified amount from the product stock. Prevents negative stock values.
void Product::removeStock(int amount) {
    if (amount <= quantity) {
        quantity -= amount;
    } else {
        quantity = 0;
    }
}
