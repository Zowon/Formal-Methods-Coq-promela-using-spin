#include <gtest/gtest.h>
#include <cmath>

// Assuming the original calculator functions are in a header file
#include "calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    // Setup method if needed
};

// 1. Invalid Input by entering Non-numeric Values
TEST_F(CalculatorTest, NonNumericInputAddition) {
    // This test would typically be implemented with input validation
    EXPECT_THROW(add("abc", 5), std::invalid_argument);
}

TEST_F(CalculatorTest, NonNumericInputMultiplication) {
    EXPECT_THROW(multiply("invalid", 10.5), std::invalid_argument);
}

TEST_F(CalculatorTest, NonNumericInputBitwiseAND) {
    EXPECT_THROW(bitwise_and("non-int", 42), std::invalid_argument);
}

// 2. Invalid operator selected
TEST_F(CalculatorTest, InvalidOperatorSelection) {
    EXPECT_THROW(performOperation('^', 5, 3), std::invalid_argument);
}

TEST_F(CalculatorTest, OutOfRangeOperatorSelection) {
    EXPECT_THROW(performOperation('9', 5, 3), std::invalid_argument);
}

TEST_F(CalculatorTest, UnrecognizedSymbolOperation) {
    EXPECT_THROW(performOperation('%', 5, 3), std::invalid_argument);
}

// 3. Invalid number of input provided
TEST_F(CalculatorTest, InsufficientInputForBinaryOperation) {
    EXPECT_THROW(add(5), std::invalid_argument);
}

TEST_F(CalculatorTest, ExcessiveInputForUnaryOperation) {
    EXPECT_THROW(bitwise_not(5, 3), std::invalid_argument);
}

TEST_F(CalculatorTest, MissingOperand) {
    EXPECT_THROW(divide(10), std::invalid_argument);
}

// 4. Division by zero
TEST_F(CalculatorTest, DivisionByZero) {
    EXPECT_THROW(divide(10, 0), std::runtime_error);
}

TEST_F(CalculatorTest, NegativeDivisionByZero) {
    EXPECT_THROW(divide(-5, 0), std::runtime_error);
}

TEST_F(CalculatorTest, FractionalDivisionByZero) {
    EXPECT_THROW(divide(3.14, 0.0), std::runtime_error);
}

// 5. Bitwise operations on non-integer numbers
TEST_F(CalculatorTest, BitwiseANDWithFloats) {
    EXPECT_THROW(bitwise_and(5.5, 3.2), std::invalid_argument);
}

TEST_F(CalculatorTest, BitwiseORWithDecimals) {
    EXPECT_THROW(bitwise_or(10.7, 2.3), std::invalid_argument);
}

TEST_F(CalculatorTest, BitwiseNOTWithFloat) {
    EXPECT_THROW(bitwise_not(6.7), std::invalid_argument);
}

// 6. Overflow/Underflow error
TEST_F(CalculatorTest, AdditionOverflow) {
    EXPECT_THROW(add(std::numeric_limits<double>::max(), 
                     std::numeric_limits<double>::max()), 
                 std::overflow_error);
}

TEST_F(CalculatorTest, SubtractionUnderflow) {
    EXPECT_THROW(subtract(std::numeric_limits<double>::lowest(), 
                          std::numeric_limits<double>::max()), 
                 std::underflow_error);
}

TEST_F(CalculatorTest, MultiplicationOverflow) {
    EXPECT_THROW(multiply(std::numeric_limits<double>::max(), 
                          2.0), 
                 std::overflow_error);
}

// 7. Floating point errors
TEST_F(CalculatorTest, FloatingPointPrecision) {
    EXPECT_NEAR(add(0.1, 0.2), 0.3, 1e-10);
}

TEST_F(CalculatorTest, FloatingPointDivision) {
    EXPECT_NEAR(divide(1.0, 3.0), 0.3333, 0.0001);
}

TEST_F(CalculatorTest, FloatingPointSubtraction) {
    EXPECT_NEAR(subtract(1.0, 0.7), 0.3, 1e-10);
}

// 8. Logical and/or errors
TEST_F(CalculatorTest, BitwiseLogicalAND) {
    EXPECT_EQ(bitwise_and(5, 3), 1);  // 101 & 011 = 001
}

TEST_F(CalculatorTest, BitwiseLogicalOR) {
    EXPECT_EQ(bitwise_or(5, 3), 7);   // 101 | 011 = 111
}

TEST_F(CalculatorTest, BitwiseNOTComplement) {
    EXPECT_EQ(bitwise_not(5), ~5);
}

// 9. Data type errors
TEST_F(CalculatorTest, LargeNumberHandling) {
    double largeNum = 1e308;
    EXPECT_NO_THROW(multiply(largeNum, 0.5));
}

TEST_F(CalculatorTest, SmallNumberPrecision) {
    double smallNum = 1e-308;
    EXPECT_NO_THROW(divide(smallNum, 2.0));
}

TEST_F(CalculatorTest, IntegerOverflowCheck) {
    long long largeInt = std::numeric_limits<int>::max();
    EXPECT_THROW(bitwise_and(largeInt, largeInt), std::overflow_error);
}

// 10. Extra test for comprehensive coverage
TEST_F(CalculatorTest, PositiveNegativeOperations) {
    EXPECT_EQ(add(-5, 3), -2);
    EXPECT_EQ(multiply(-2, -3), 6);
    EXPECT_EQ(divide(-10, 2), -5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}