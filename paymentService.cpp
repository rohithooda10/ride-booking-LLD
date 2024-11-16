#include "paymentService.h"

void PaymentService::processPayment(Payment* payment)
{
    payment->checkBalance();
    payment->pay(payment->getFare());
    payment->status = PaymentStatus::PAYMENTCOMPLETED;
}