#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    static double add(double num1, double num2);
    static double subtract(double num1, double num2);
    static double multiply(double num1, double num2);
    static double divide(double num1, double num2);
    static int bitwise_and(int num1, int num2);
    static int bitwise_or(int num1, int num2);
    static int bitwise_not(int num1);
};

#endif