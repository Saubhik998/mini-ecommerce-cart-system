#include "product.h"
#include "cart.h"
#include "discount.h"
#include "currency_converter.h"
#include <iostream>
#include <string>

int main() {
    Product laptop("P001", "Laptop", 1000.00, "Electronics");
    Product phone("P002", "Phone", 500.00, "Electronics");
    Product tshirt("P003", "T-Shirt", 20.00, "Fashion");

    std::vector<Product> productCatalog = {laptop, phone, tshirt};

    Cart myCart;
    std::string command;

    while (true) {
        std::cout << "> ";
        std::cin >> command;

        if (command == "add_to_cart") {
            std::string productID;
            int quantity;
            std::cin >> productID >> quantity;
            for (const auto &product : productCatalog) {
                if (product.productID == productID) {
                    myCart.addToCart(product, quantity);
                }
            }
        } else if (command == "view_cart") {
            myCart.viewCart();
        } else if (command == "list_discounts") {
            myCart.listDiscounts();
        } else if (command == "checkout") {
            Buy1Get1Free b1g1;
            TenPercentOffElectronics tenPercent;
            float discount = b1g1.applyDiscount(myCart) + tenPercent.applyDiscount(myCart);
            float finalTotal = myCart.getTotalCost() - discount;
            std::cout << "Final total after discounts: " << finalTotal << " USD\n";
            std::string convert;
            std::cout << "Would you like to view it in a different currency? (yes/no): ";
            std::cin >> convert;
            if (convert == "yes") {
                std::string currency;
                std::cout << "Available Currencies: EUR, GBP\n";
                std::cout << "Enter currency: ";
                std::cin >> currency;
                if (currency == "EUR") {
                    std::cout << "Final total in EUR: "
                              << CurrencyConverter::convertToEUR(finalTotal) << " EUR\n";
                } else if (currency == "GBP") {
                    std::cout << "Final total in GBP: "
                              << CurrencyConverter::convertToGBP(finalTotal) << " GBP\n";
                }
            }
        } else if (command == "empty_cart") {
            myCart.emptyCart(); // Call the new method to empty the cart
            myCart.viewCart();   // Optionally show the cart after emptying it
        } else if (command == "exit") {
            break;
        }
    }

    return 0;
}
