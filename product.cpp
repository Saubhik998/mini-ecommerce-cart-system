#include "product.h"

Product::Product(std::string id, std::string nm, float pr, std::string cat)
    : productID(id), name(nm), price(pr), category(cat) {}
