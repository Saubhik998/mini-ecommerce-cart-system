#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    std::string productID;
    std::string name;
    float price;
    std::string category;

    Product(std::string id, std::string nm, float pr, std::string cat);
};

#endif
