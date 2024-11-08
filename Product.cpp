#include "Product.h"

Product::Product() 
    : productID("1"), 
      name("Crema"), 
      price(15), 
      quantity(5) {}

Product::Product(const std::string& productID, const std::string& name, double price, int quantity)
    : productID(productID), 
      name(name), 
      price(price), 
      quantity(quantity) {}

double Product::getPrice() const {
    return price;
}

int Product::getQuantity() const {
    return quantity;
}

void Product::setPrice(double newPrice) {
    price = newPrice;
}

void Product::addStock(int qty) {
    quantity += qty;
}

void Product::removeStock(int qty) {
    if (quantity >= qty) {
        quantity -= qty;
    }
}
