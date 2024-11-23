#ifndef SUPPLIER_H
#define SUPPLIER_H

#include <string>

// Class Supplier: Represents the supplier of a product with name and contact information.
class Supplier {
private:
    std::string name;           // Supplier's name.
    std::string contactInfo;    // Supplier's contact information.

public:
    // Constructor: Initializes a supplier with a name and contact info.
    Supplier(std::string name, std::string contactInfo);
    Supplier(); // Default constructor.

    // Getters and setters for supplier attributes.
    std::string getName() const;      // Returns the supplier's name.
    void setName(std::string name);   // Sets the supplier's name.

    std::string getContactInfo() const;      // Returns the supplier's contact information.
    void setContactInfo(std::string contactInfo); // Sets the supplier's contact information.
};

#endif
