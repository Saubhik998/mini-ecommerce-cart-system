#include "cart.h"
#include <iostream>

Cart::Cart() : totalCost(0.0f) {}

void Cart::addToCart(Product product, int quantity) {
    cartItems.push_back(std::make_pair(product, quantity));
    totalCost += product.price * quantity;
}

void Cart::removeFromCart(std::string productID, int quantity) {
    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->first.productID == productID) {
            totalCost -= it->first.price * quantity;
            if (it->second <= quantity) {
                cartItems.erase(it);
            } else {
                it->second -= quantity;
            }
            break;
        }
    }
}

void Cart::viewCart() {
    std::cout << "Your Cart:\n";
    if (cartItems.empty()) {
        std::cout << "Your cart is empty.\n"; // Message if cart is empty
    } else {
        for (const auto &item : cartItems) {
            std::cout << item.first.name << " - Quantity: " << item.second
                      << ", Price: " << item.first.price << " USD, Total: "
                      << item.first.price * item.second << " USD\n";
        }
        std::cout << "Total (before discounts): " << totalCost << " USD\n";
    }
}

float Cart::getTotalCost() {
    return totalCost;
}

const std::vector<std::pair<Product, int>>& Cart::getCartItems() const {
    return cartItems;
}

// Implementation of emptyCart
void Cart::emptyCart() {
    cartItems.clear(); // Clear the items in the cart
    totalCost = 0.0f;  // Reset total cost
    std::cout << "Your cart has been emptied.\n"; // Notify the user
}

// Implementation of listDiscounts
void Cart::listDiscounts() {
    std::cout << "Available Discounts:\n";
    std::cout << "1. Buy 1 Get 1 Free on Fashion items\n";
    std::cout << "2. 10% Off on Electronics\n";
}
