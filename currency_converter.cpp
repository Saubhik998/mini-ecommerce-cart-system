#include "currency_converter.h"

float CurrencyConverter::convertToEUR(float amount) {
    return amount * 0.85;
}

float CurrencyConverter::convertToGBP(float amount) {
    return amount * 0.75;
}
