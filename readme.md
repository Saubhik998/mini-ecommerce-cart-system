
# Mini E-commerce Cart System

## Project Overview

The **Mini E-commerce Cart System** is a command-line application that allows users to manage their shopping cart effectively. Users can add products to the cart, view items, apply discounts, and check out with total calculations in multiple currencies. This project demonstrates the application of Object-Oriented Programming (OOP) principles in C++.

## Table of Contents

- [Features]
- [Technologies Used]
- [Getting Started]
- [Usage]
- [Commands]
- [Future Enhancements]
- [Contributors]

## Features

- Add items to the cart with specified quantities.
- Remove items or adjust quantities in the cart.
- View current items and total cost in the cart.
- Apply dynamic discounts (e.g., Buy 1 Get 1 Free, 10% Off on Electronics).
- Checkout process to calculate the final price.
- Currency conversion between USD, EUR, and GBP.
- Empty the cart at any time and view the current state.

## Technologies Used

- C++: The primary programming language for this project.
- Object-Oriented Programming (OOP): Employed to structure the project.

## Getting Started

To run the Mini E-commerce Cart System locally, follow these steps:

1. **Clone the repository** (if applicable):
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```

2. **Open the project folder**:
   Navigate to the directory where the C++ files are located.

3. **Compile the code**:
   Use the following command to compile the program:
   ```bash
   g++ -o cart_system main.cpp product.cpp cart.cpp discount.cpp currency_converter.cpp
   ```

4. **Run the program**:
   Execute the compiled program with:
   ```bash
   ./cart_system
   ```

## Usage

Once the program is running, you can interact with it using specific commands. Here’s how you can utilize the application:

### Commands

- **Add items to the cart**:
  ```bash
  add_to_cart <product_id> <quantity>
  ```

- **View current items in the cart**:
  ```bash
  view_cart
  ```

- **List available discounts**:
  ```bash
  list_discounts
  ```

- **Checkout and apply discounts**:
  ```bash
  checkout
  ```

- **Convert total to a different currency**:
  ```bash
  yes
  <currency>  # (e.g., EUR or GBP)
  ```

- **Empty the cart**:
  ```bash
  empty_cart
  ```

- **Exit the program**:
  ```bash
  exit
  ```

## Future Enhancements

- Implement a user login system to maintain user-specific carts.
- Expand product categories and add more product attributes.
- Integrate a database for persistent data storage.
- Add a graphical user interface (GUI) for better user interaction.

## Contributors

- Saubhik Dey

---
