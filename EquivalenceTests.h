#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testZeroes();
        testMixedNumbers();
        testLargeNumbers();
        testSpecialCases();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed" << std::endl;
        } else {
            std::cout << "Test 1 passed." << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed" << std::endl;
        } else {
            std::cout << "Test 2 passed." << std::endl;
        }
    }

    void testZeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 3 failed" << std::endl;
        } else {
            std::cout << "Test 3 passed." << std::endl;
        }

        if (addition.add(0, 5) != 5) {
            std::cout << "Test 4 failed" << std::endl;
        } else {
            std::cout << "Test 4 passed." << std::endl;
        }
    }

    void testMixedNumbers() {
        Addition addition;
        if (addition.add(5, -3) != 2) {
            std::cout << "Test 5 failed" << std::endl;
        } else {
            std::cout << "Test 5 passed." << std::endl;
        }
    }

    void testLargeNumbers() {
        Addition addition;
        if (addition.add(1000000, 2000000) != 3000000) {
            std::cout << "Test 6 failed" << std::endl;
        } else {
            std::cout << "Test 6 passed." << std::endl;
        }

        if (addition.add(-1000000, -2000000) != -3000000) {
            std::cout << "Test 7 failed" << std::endl;
        } else {
            std::cout << "Test 7 passed." << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(1, -1) != 0) {
            std::cout << "Test 8 failed" << std::endl;
        } else {
            std::cout << "Test 8 passed." << std::endl;
        }

        if (addition.add(-1, 1) != 0) {
            std::cout << "Test 9 failed" << std::endl;
        } else {
            std::cout << "Test 9 passed." << std::endl;
        }
    }
};
