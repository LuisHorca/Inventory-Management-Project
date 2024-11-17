#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

class Supplier {
private:
    std::string name;
    std::string contactInfo;

public:
    Supplier(std::string name, std::string contactInfo);
    Supplier();

    std::string getName() const;
    void setName(std::string name);

    std::string getContactInfo() const;
    void setContactInfo(std::string contactInfo);
};

#endif 
