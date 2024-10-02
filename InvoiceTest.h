#ifndef INVOICE_TEST_H
#define INVOICE_TEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        testAddServiceCostNegative();
    }

private:
    void testConstructor() {
        Invoice invoice("ABCD");
        if (invoice.getInvoiceId() != "ABCD") {
            std::cout << "Test Constructor failed!" << std::endl;
        } else {
            std::cout << "Test Constructor passed." << std::endl;
        }
    }

    void testAddServiceCost() {
        Invoice invoice("ABCD");
        
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 passed." << std::endl;
        }

        invoice.addServiceCost(1);
        if (invoice.getDollarsOwed() != 11) {
            std::cout << "Test 2 failed!" << std::endl;
        } else {
            std::cout << "Test 2 passed." << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("ABCD");
        invoice.addServiceCost(20);
        if (invoice.getDollarsOwed() != 20) {
            std::cout << "Test GetDollarsOwed failed!" << std::endl;
        } else {
            std::cout << "Test GetDollarsOwed passed." << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("XYZ");
        if (invoice.getInvoiceId() != "XYZ") {
            std::cout << "Test GetInvoiceId failed!" << std::endl;
        } else {
            std::cout << "Test GetInvoiceId passed." << std::endl;
        }
    }

    void testAddServiceCostNegative() {
        Invoice invoice("ABCD");
        try {
            invoice.addServiceCost(-5);
            std::cout << "Test AddServiceCostNegative failed!" << std::endl;
        } catch (const std::invalid_argument& e) {
            std::cout << "Test AddServiceCostNegative passed." << std::endl;
        }
    }
};

#endif 
