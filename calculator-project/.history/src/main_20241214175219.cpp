#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Subtraction: " << subtract(10, 4) << endl;
    cout << "Multiplication: " << multiply(6, 7) << endl;
    cout << "Division: " << divide(20, 4) << endl;
    cout << "Bitwise AND: " << bitwise_and(5, 3) << endl;
    cout << "Bitwise OR: " << bitwise_or(5, 3) << endl;
    cout << "Bitwise NOT: " << bitwise_not(5) << endl;

    return 0;
}
