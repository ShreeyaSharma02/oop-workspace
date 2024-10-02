#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;


        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed" << std::endl;
        } else {
            std::cout << "Test 1 passed." << std::endl;
        }

        
        if (addition.add(-1, -2) != -3) {
            std::cout << "Test 2 failed" << std::endl;
        } else {
            std::cout << "Test 2 passed." << std::endl;
        }

        
        if (addition.add(0, 5) != 5) {
            std::cout << "Test 3 failed" << std::endl;
        } else {
            std::cout << "Test 3 passed." << std::endl;
        }

        if (addition.add(5, -2) != 3) {
            std::cout << "Test 4 failed" << std::endl;
        } else {
            std::cout << "Test 4 passed." << std::endl;
        }
    }
};
