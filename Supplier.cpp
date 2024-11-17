#include "Supplier.h"

Supplier::Supplier(std::string name, std::string contactInfo)
    : name(name), contactInfo(contactInfo) {}

Supplier::Supplier() : name(""), contactInfo("") {}

std::string Supplier::getName() const {
    return name;
}

void Supplier::setName(std::string name) {
    this->name = name;
}

std::string Supplier::getContactInfo() const {
    return contactInfo;
}

void Supplier::setContactInfo(std::string contactInfo) {
    this->contactInfo = contactInfo;
}
