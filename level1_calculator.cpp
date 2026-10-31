// ==========================================
// Project: C++ Calculator - Level 1 (Single Run)
// Concepts Used: Switch-Case, if-else, cin/cout, break, default
// Description: Simple basic calculator with 2 numbers.
// Note: Yeh ek baar run hota hai, dobara use karne ke liye code ko re-run karna padta hai.
// ==========================================

#include <iostream>

using namespace std;

int main()
{
    int Num1, Num2;
    int Result;
    char Operator;
    bool IsValid = true;

    cout << "----- BASIC CALCULATOR -----\n\n";

    cout << "Enter Your First Number : ";
    cin >> Num1;

    cout << "Chose Your Operator [ + , -, * , / ] : ";
    cin >> Operator;

    cout << "Enter Your Second Number : ";
    cin >> Num2;

    switch (Operator)
    {
    case '+':
        Result = Num1 + Num2;
        break;

    case '-':
        Result = Num1 - Num2;
        break;

    case '*':
        Result = Num1 * Num2;
        break;

    case '/':
        if (Num2 != 0)
        {
            Result = Num1 / Num2;
        }
        else
        {
            cout << "Error: Division by zero is not allowed!\n";
            IsValid = false;
        }
        break;

    default:
        cout << "Error: Invalid operator! Please use +, -, *, or /.\n";
        IsValid = false;
        break;
    }

    if (IsValid)
    {
        cout << "\nResult Is  : " << Num1 << " " << Operator << " " << Num2 << " = " << Result << "\n\n";
    }

    return 0;
}