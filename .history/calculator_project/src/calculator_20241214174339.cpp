#include <iostream>
using namespace std;
double add(double num1, double num2)
{
    return num1 + num2;
}
double subtract(double num1, double num2)
{
    return num1 - num2;
}
double multiply(double num1, double num2)
{
    return num1 * num2;
}
double divide(double num1, double num2)
{
    return num1 / num2;
}
int bitwise_and(int num1, int num2)
{
    return num1 & num2;
}
int bitwise_or(int num1, int num2)
{
    return num1 | num2;
}
int bitwise_not(int num1)
{
    return ~num1;
}
void showMenu()
{
    cout << "Basic Calculator - Supported Operations:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. AND (bitwise &)\n";
    cout << "6. OR (bitwise |)\n";
    cout << "7. NOT (bitwise ~)\n";
    cout << "8. Exit\n";
}
int main()
{
    char op;
    double num1, num2;
    bool exitFlag = false;
    while (!exitFlag)
    {
        showMenu();

        cout << "Enter operator: ";
        cin >> op;
        if (op == '8')
        {
            exitFlag = true;
            continue;
        }
        if (op == '~')
        {
            cout << "Enter number for NOT operation: ";
            cin >> num1;
            cout << "Result (bitwise NOT): "
                 << bitwise_not(static_cast<int>(num1)) << endl;
        }
        else
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            switch (op)
            {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case '&':
                cout << "Result (bitwise AND): "
                     << bitwise_and(static_cast<int>(num1),
                                    static_cast<int>(num2))

                     << endl;
                break;
            case '|':
                cout << "Result (bitwise OR): "
                     << bitwise_or(static_cast<int>(num1),
                                   static_cast<int>(num2))

                     << endl;
                break;
            default:
                cout << "Invalid operator!\n";
                break;
            }
        }
    }
}