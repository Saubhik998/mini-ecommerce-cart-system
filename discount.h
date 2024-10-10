#ifndef DISCOUNT_H
#define DISCOUNT_H

#include "cart.h"

class Discount {
public:
    virtual float applyDiscount(Cart &cart) = 0;
    virtual ~Discount() {}
};

class Buy1Get1Free : public Discount {
public:
    float applyDiscount(Cart &cart) override;
};

class TenPercentOffElectronics : public Discount {
public:
    float applyDiscount(Cart &cart) override;
};

#endif
