#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

class Supplier {
private:
    std::string name;
    std::string contactInfo;

public:
    Supplier();
    Supplier(std::string name, std::string contactInfo);
    std::string getContactInfo();
};

#endif
