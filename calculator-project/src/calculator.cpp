#include "calculator.h"
#include <iostream>
#include <limits>

using namespace std;

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 == 0) {
        cerr << "Error: Division by zero is not allowed.\n";
        return numeric_limits<double>::infinity();
    }
    return num1 / num2;
}

int bitwise_and(int num1, int num2) {
    return num1 & num2;
}

int bitwise_or(int num1, int num2) {
    return num1 | num2;
}

int bitwise_not(int num1) {
    return ~num1;
}
