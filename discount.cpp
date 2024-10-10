#include "discount.h"
#include <iostream>

float Buy1Get1Free::applyDiscount(Cart &cart) {
    float discount = 0.0f;
    const auto &items = cart.getCartItems(); // Use the new method to get cart items
    for (const auto &item : items) {
        if (item.first.category == "Fashion") {
            int quantity = item.second;
            if (quantity >= 2) {
                int freeItems = quantity / 2;
                discount += freeItems * item.first.price;
                std::cout << "Buy 1 Get 1 Free on " << item.first.name << " applied.\n";
            }
        }
    }
    return discount;
}

float TenPercentOffElectronics::applyDiscount(Cart &cart) {
    float discount = 0.0f;
    const auto &items = cart.getCartItems(); // Use the new method to get cart items
    for (const auto &item : items) {
        if (item.first.category == "Electronics") {
            discount += item.second * item.first.price * 0.10; // 10% discount
            std::cout << "10% Off on " << item.first.name << " applied.\n";
        }
    }
    return discount;
}
