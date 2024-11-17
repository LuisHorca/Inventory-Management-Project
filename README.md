# Inventory-Management-Project
------------------------------------------------------------------------------
Problem: The problem is to make inventory control more efficient, to avoid ant losses or unrecorded expenses in convenience stores. In this case, the amount of products that one of these stores has was greatly simplified; in this case, we only use 3 kinds of products, which are dairy, meat and canned goods.
The idea is to give continuity to the project previously generated in Python, but now implementing the use of classes and objects, using POO in C++. I also consider that this problem is important because it can help the growth of small and medium companies, preventing them from having undetectable losses.
---------
Project Description:
In this project we will develop an inventory control software using Object Oriented Programming in C++. This system is designed to manage products efficiently in a convenience store. The main classes of the system and their justification in the context of the project are described below:
----------
Supplier:
This class represents the suppliers that supply the inventory products. Its inclusion is essential to maintain a clear record of who supplies each product, which facilitates replenishment management and the resolution of supply-related problems. Supplier data, such as name and contact information, allows for effective communication and order tracking.
--------------
Product:
This is the base class that groups the general characteristics of all products in inventory. Its purpose is to define common attributes, such as product identifier, name, price, quantity on hand and its associated supplier. This allows for centralized and consistent inventory management. By using this base class, the implementation of common functionalities, such as price calculation or stock control, is simplified and code redundancy is avoided.
-----------------
Can:
This subclass is used to represent canned goods, which are common in convenience stores. The main distinguishing feature of this class is the volume of the contents, which is a relevant attribute for this type of product. The inclusion of this subclass allows specific management of data related to canned products and facilitates their differentiation from other types of products.
-------------------
Dairy:
This subclass focuses on dairy products, which usually have special storage requirements, such as the need for refrigeration. Therefore, this class includes specific attributes, such as whether the product must be refrigerated and the volume of the product. This is important to ensure that perishable products are properly managed in inventory, helping to reduce spoilage losses.
------------------------------
Meat:
This subclass represents meat products, which also require special handling due to their perishable nature. Distinguishing attributes of this class include the type of meat cut and whether the product is frozen. The inclusion of this subclass makes it possible to record relevant information for meat products and to guarantee their proper handling in terms of storage and traceability.
---------------------------------------------------

![Classes diagram drawio (5)](https://github.com/user-attachments/assets/0a8b27b7-b1fd-4d66-aa5a-e766f058c755)






