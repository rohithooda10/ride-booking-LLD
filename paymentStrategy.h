#pragma once
#include "header.h"

class PaymentStrategy {
public:
    virtual void checkBalance() = 0;
    virtual void pay(double fare) = 0;
};