#include "Supplier.h"

Supplier::Supplier() 
    : name("Lala"), 
      contactInfo("123") {}

Supplier::Supplier(const std::string& name, const std::string& contactInfo)
    : name(name), 
      contactInfo(contactInfo) {}

std::string Supplier::getContactInfo() const {
    return contactInfo;
}
