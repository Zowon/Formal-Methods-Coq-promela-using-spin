// #include <gtest/gtest.h>
// #include "../src/calculator.h"
// #include <limits>

// // Test cases
// TEST(CalculatorTest, Addition) {
//     EXPECT_EQ(add(2, 3), 5);
//     EXPECT_EQ(add(-1, -1), -2);

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

// Test cases for handling large numbers in addition
TEST(CalculatorTest, AdditionLargeNumbers) {
    EXPECT_EQ(add(1e10, 2e10), 3e10);       // Large positive numbers
    EXPECT_EQ(add(-1e10, -2e10), -3e10);    // Large negative numbers
    EXPECT_EQ(add(1e10, -1e10), 0);         // Large positive and negative numbers
}

// Test cases for handling large numbers in subtraction
TEST(CalculatorTest, SubtractionLargeNumbers) {
    EXPECT_EQ(subtract(1e10, 2e10), -1e10); // Large positive numbers
    EXPECT_EQ(subtract(-1e10, 2e10), -3e10); // Large negative and positive numbers
    EXPECT_EQ(subtract(1e10, -1e10), 2e10);  // Large positive and negative numbers
}

// Test cases for handling large numbers in multiplication
TEST(CalculatorTest, MultiplicationLargeNumbers) {
    EXPECT_EQ(multiply(1e5, 2e5), 2e10);    // Large positive numbers
    EXPECT_EQ(multiply(-1e5, 2e5), -2e10);  // Large negative and positive numbers
    EXPECT_EQ(multiply(1e5, -2e5), -2e10);  // Large positive and negative numbers
}

// Test cases for handling large numbers in division
TEST(CalculatorTest, DivisionLargeNumbers) {
    EXPECT_EQ(divide(1e10, 2e5), 5e4);      // Large positive numbers
    EXPECT_EQ(divide(-1e10, 2e5), -5e4);    // Large negative and positive numbers
    EXPECT_EQ(divide(1e10, 0), std::numeric_limits<double>::infinity()); // Division by zero
}

// Test cases for non-integer bitwise operations
TEST(CalculatorTest, BitwiseOperationsNonInteger) {
    // NOTE: Bitwise operations are only defined for integers, so these tests are invalid
    // and are used to show that such operations may give unexpected results or errors.
    EXPECT_EQ(bitwise_and(5.5, 3), 1);       // Bitwise AND with float (invalid)
    EXPECT_EQ(bitwise_or(5.5, 3), 7);        // Bitwise OR with float (invalid)
    EXPECT_EQ(bitwise_not(5.5), ~5);         // Bitwise NOT with float (invalid)
}

// Test cases for division by zero with error handling
TEST(CalculatorTest, DivisionByZeroHandling) {
    EXPECT_EQ(divide(5, 0), std::numeric_limits<double>::infinity()); // Division by zero
    EXPECT_EQ(divide(100, 0), std::numeric_limits<double>::infinity()); // Division by zero
    EXPECT_EQ(divide(-10, 0), std::numeric_limits<double>::infinity()); // Division by zero
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
