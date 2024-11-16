#pragma once
#include "header.h"
#include "paymentStrategy.h"

class Card: public PaymentStrategy {
public:
    void checkBalance();
    void pay(double fare);
};