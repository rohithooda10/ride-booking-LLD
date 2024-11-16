#pragma once
#include "header.h"
#include "paymentStrategy.h"

enum PaymentStatus {
    PENDING,
    REJECTED,
    PAYMENTCOMPLETED
};

class Payment {
    double fare;
    PaymentStrategy* strategy;
public:
    PaymentStatus status;
    Payment(double rideFare, PaymentStrategy* paymentstrategy);
    void checkBalance();
    void pay(double fare);
    double getFare();
};