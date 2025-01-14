#include <gtest/gtest.h>
#include "../src/calculator.h"
#include <limits>

// Test cases for addition
TEST(CalculatorTest, Addition) {
    EXPECT_EQ(add(2, 3), 5);                 // Positive numbers
    EXPECT_EQ(add(-5, -3), -8);             // Negative numbers
    EXPECT_EQ(add(2.5, 3.5), 6);            // Decimal numbers
}

// Test cases for subtraction
TEST(CalculatorTest, Subtraction) {
    EXPECT_EQ(subtract(5, 3), 2);           // Positive numbers
    EXPECT_EQ(subtract(-5, -3), -2);        // Negative numbers
    EXPECT_EQ(subtract(7.5, 3.5), 4);       // Decimal numbers
}

// Test cases for multiplication
TEST(CalculatorTest, Multiplication) {
    EXPECT_EQ(multiply(3, 4), 12);          // Positive numbers
    EXPECT_EQ(multiply(-3, 4), -12);        // Negative and positive
    EXPECT_EQ(multiply(2.5, 4), 10);        // Decimal numbers
}

// Test cases for division
TEST(CalculatorTest, Division) {
    EXPECT_EQ(divide(8, 4), 2);             // Positive numbers
    EXPECT_EQ(divide(-8, 4), -2);           // Negative and positive
    EXPECT_EQ(divide(7.5, 2.5), 3);         // Decimal numbers
    EXPECT_EQ(divide(1, 0), std::numeric_limits<double>::infinity()); // Division by zero
}

// Test cases for bitwise AND
TEST(CalculatorTest, BitwiseAnd) {
    EXPECT_EQ(bitwise_and(5, 3), 1);        // Basic example
    EXPECT_EQ(bitwise_and(12, 6), 4);       // Larger numbers
    EXPECT_EQ(bitwise_and(0, 3), 0);        // AND with zero
}

// Test cases for bitwise OR
TEST(CalculatorTest, BitwiseOr) {
    EXPECT_EQ(bitwise_or(5, 3), 7);         // Basic example
    EXPECT_EQ(bitwise_or(8, 4), 12);        // Larger numbers
    EXPECT_EQ(bitwise_or(0, 7), 7);         // OR with zero
}

// Test cases for bitwise NOT
TEST(CalculatorTest, BitwiseNot) {
    EXPECT_EQ(bitwise_not(0), ~0);          // NOT of zero
    EXPECT_EQ(bitwise_not(5), ~5);          // Positive number
    EXPECT_EQ(bitwise_not(-1), ~(-1));      // Negative number
}

// Test cases for modulus
TEST(CalculatorTest, Modulus) {
    EXPECT_EQ(modulus(10, 3), 1);           // Positive numbers
    EXPECT_EQ(modulus(7, 4), 3);            // Smaller divisor
    EXPECT_EQ(modulus(-9, 4), -1);          // Negative dividend
}

// Test cases for exponentiation
TEST(CalculatorTest, Exponentiation) {
    EXPECT_EQ(exponentiation(2, 3), 8);     // Positive base and exponent
    EXPECT_EQ(exponentiation(3, 2), 9);     // Base greater than exponent
    EXPECT_EQ(exponentiation(4, 0.5), 2);   // Fractional exponent
}

// Test cases for square root
TEST(CalculatorTest, SquareRoot) {
    EXPECT_EQ(square_root(16), 4);          // Perfect square
    EXPECT_EQ(square_root(20), 4.47214);    // Non-perfect square
    EXPECT_EQ(square_root(0), 0);           // Square root of zero
}

// Test cases for logarithm
TEST(CalculatorTest, Logarithm) {
    EXPECT_EQ(logarithm(100), 2);           // Log base 10
    EXPECT_EQ(logarithm(1), 0);             // Log of 1
    EXPECT_EQ(logarithm(0), -std::numeric_limits<double>::infinity()); // Log of zero
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
