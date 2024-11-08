#include "Supplier.h"

Supplier::Supplier(const std::string &name, const std::string &contactInfo)
    : name(name), contactInfo(contactInfo) {}

std::string Supplier::getContactInfo() const {
    return contactInfo;
}
