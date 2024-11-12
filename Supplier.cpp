#include "Supplier.h"

Supplier::Supplier() : name(""), contactInfo("") {}

Supplier::Supplier(const std::string &name, const std::string &contactInfo)
    : name(name), contactInfo(contactInfo) {}

std::string Supplier::getContactInfo() const {
    return contactInfo;
}

void Supplier::setContactInfo(const std::string &contactInfo) {
    this->contactInfo = contactInfo;
}

