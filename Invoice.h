#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <stdexcept>

class Invoice {
private:
    std::string invoiceId;
    double dollarsOwed;

public:
    
    Invoice(const std::string& invoiceId)
        : invoiceId(invoiceId), dollarsOwed(0.0) {}

    
    void addServiceCost(double costDollars) {
        if (costDollars < 0) {
            throw std::invalid_argument("Cost must be a positive value.");
        }
        dollarsOwed += costDollars;
    }

    
    double getDollarsOwed() const {
        return dollarsOwed;
    }

    
    std::string getInvoiceId() const {
        return invoiceId;
    }
};

#endif 
