# Inventory Management Project

## Problem
Managing inventory in convenience stores often leads to inefficiencies, minor losses, and unrecorded expenses. These issues hinder the growth of small and medium-sized businesses, as they struggle to detect and prevent inventory discrepancies. 

To address this, we propose an inventory control system that simplifies product management. This project focuses on three product categories: dairy, meat, and canned goods. It builds upon a prior implementation in Python by introducing Object-Oriented Programming (OOP) principles in C++. This improvement ensures better scalability and code organization.

## Project Description
The goal of this project is to develop inventory control software using OOP in C++. The system is designed to manage inventory efficiently in convenience stores. Below, we describe the main classes and their roles within the system:

### Classes and Justifications:
- **Supplier:**  
  Represents the suppliers of inventory products.  
  - **Purpose:** Maintain a clear record of each product's supplier, facilitating restocking and resolving supply-related issues.  
  - **Attributes:** Includes supplier name and contact information for communication and order tracking.

- **Product (Base Class):**  
  Groups common characteristics of all inventory products.  
  - **Purpose:** Centralize and standardize inventory management with attributes like product ID, name, price, quantity, and supplier.  
  - **Key Features:** Simplifies shared functionality (e.g., stock control, price updates) while avoiding redundant code.

- **Can (Subclass of Product):**  
  Represents canned goods, which are common in convenience stores.  
  - **Purpose:** Manage specific data, such as content volume, relevant to this type of product.  
  - **Specialization:** Facilitates differentiation and handling of canned goods.

- **Dairy (Subclass of Product):**  
  Focuses on dairy products, which require special storage conditions.  
  - **Purpose:** Handle attributes like refrigeration status and product volume, ensuring proper management of perishable items.  
  - **Relevance:** Helps prevent spoilage and reduce inventory losses.

- **Meat (Subclass of Product):**  
  Represents meat products with specific storage needs.  
  - **Purpose:** Manage details like meat cut type and frozen status to ensure proper handling and traceability.  
  - **Specialization:** Enables detailed management and storage safety for perishable products.

## Key Features
- Reduces unrecorded inventory losses and discrepancies.
- Enhances efficiency in inventory tracking and supplier management.
- Supports small and medium-sized businesses by minimizing untracked losses and optimizing operations.

## How to Use the Program

### 1. Download the Project Files
- Clone or download the repository containing all the project files.
- Ensure the following files are in the same folder: 
  - `main.cpp`
  - `Supplier.h` and `Supplier.cpp`
  - `Product.h` and `Product.cpp`
  - `Can.h` and `Can.cpp`
  - `Dairy.h` and `Dairy.cpp`
  - `Meat.h` and `Meat.cpp`

### 2. Set Up Your Environment
- Use an **IDE** (e.g., Visual Studio Code, CLion, or Code::Blocks) or a terminal with a configured **C++ compiler** (e.g., `g++` from MinGW or GCC).
- Verify that the compiler is installed and added to your system's PATH. If using `g++`, test it with:
  ```cmd
  g++ --version
  cd path\to\project
  g++ -o inventory_management main.cpp Supplier.cpp Product.cpp Can.cpp Dairy.cpp Meat.cpp
  inventory_management
### 3. Interact with the Program

Once running, the program will display a menu with options for managing the inventory:

1. **Add products** (canned, dairy, or meat).
2. **View the entire inventory**.
3. **Search for a product by ID**.
4. **Exit the program**.

Use the menu options by entering the corresponding number and following the prompts.



![Classes diagram drawio (6)](https://github.com/user-attachments/assets/06a299f6-00ef-4ad6-8598-939e714cb7ce)








