#pragma once
#include "header.h"
#include "payment.h"

class PaymentService {
public:
    void processPayment(Payment* payment);
};