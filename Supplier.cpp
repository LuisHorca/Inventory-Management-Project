#include "Supplier.h"

// Constructor: Initializes supplier with given name and contact information.
Supplier::Supplier(std::string name, std::string contactInfo)
    : name(name), contactInfo(contactInfo) {}

// Default constructor: Initializes an empty supplier.
Supplier::Supplier() : name(""), contactInfo("") {}

// Getter for the supplier's name.
std::string Supplier::getName() const {
    return name;
}

// Setter for the supplier's name.
void Supplier::setName(std::string name) {
    this->name = name;
}

// Getter for the supplier's contact information.
std::string Supplier::getContactInfo() const {
    return contactInfo;
}

// Setter for the supplier's contact information.
void Supplier::setContactInfo(std::string contactInfo) {
    this->contactInfo = contactInfo;
}
