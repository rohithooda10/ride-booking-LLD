#pragma once
#include "header.h"
#include "paymentStrategy.h"

class Paypal: public PaymentStrategy {
public:
    void checkBalance();
    void pay(double fare);
};