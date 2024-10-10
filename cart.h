#ifndef CART_H
#define CART_H

#include "product.h"
#include <vector>
#include <string>

class Cart {
private:
    std::vector<std::pair<Product, int>> cartItems; // Private member
    float totalCost;

public:
    Cart();
    void addToCart(Product product, int quantity);
    void removeFromCart(std::string productID, int quantity);
    void viewCart();
    float getTotalCost();
    
    // New method to access cart items
    const std::vector<std::pair<Product, int>>& getCartItems() const;

    // New method to empty the cart
    void emptyCart();  // <-- Add this line

    void listDiscounts();
};

#endif
