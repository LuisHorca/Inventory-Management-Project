#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

class Supplier {
private:
    std::string name;
    std::string contactInfo;

public:
    Supplier(const std::string& name, const std::string& contactInfo);
    Supplier();

    std::string getName() const;
    void setName(const std::string& name);

    std::string getContactInfo() const;
    void setContactInfo(const std::string& contactInfo);
};

#endif 


