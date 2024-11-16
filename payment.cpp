#include "payment.h"

Payment::Payment(double rideFare, PaymentStrategy* paymentstrategy)
{
    fare = rideFare;
    strategy = paymentstrategy;
}
void Payment::checkBalance() {
    strategy->checkBalance();
}
void Payment::pay(double fare) {
    strategy->pay(fare);
}
double Payment::getFare()
{
    return fare;
}