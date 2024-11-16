#include "header.h"
#include "payment.h"
#include "ride.h"

string paymentStatusToString(PaymentStatus status)
{
    switch (status) {
        case PaymentStatus::PENDING: return "Pending";
        case PaymentStatus::REJECTED: return "Rejected";
        case PaymentStatus::PAYMENTCOMPLETED: return "PaymentCompleted";
    }
    return "Unknown";
}

string statusToString(Status status) {
    switch (status) {
        case Status::ASSIGNEDDRIVER: return "AssignedDriver";
        case Status::STARTED: return "Started";
        case Status::COMPLETED: return "Completed";
    }
    return "Unknown";
}