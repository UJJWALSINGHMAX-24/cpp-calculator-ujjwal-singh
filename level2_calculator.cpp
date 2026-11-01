#include <iostream>
using namespace std;

double AddRule(double a, double b)
{
    return a + b;
}

double SubtractRule(double a, double b)
{
    return a - b;
}

double MultiplyRule(double a, double b)
{
    return a * b;
}

double DivideRule(double a, double b)
{
    if (b == 0)
    {
        cout << "Error : Zero Divide Nhi Kiya Ja Sakta.";
        return 0;
    }
    return a / b;
}

int main()
{

    bool RunCalculator = true;

    while (RunCalculator)
    {

        double Num1, Num2;
        char Operator;
        double Result;

        cout << endl
             << "--- LOOP AND FUNCTION CALCULATOR ---" << endl;
        cout << "\nEnter Your Fist Number : ";
        cin >> Num1;

        cout << "Choose Your Operator [ + , - , * , / ] : ";
        cin >> Operator;

        cout << "Enter Your Second Number : ";
        cin >> Num2;

        if (Operator == '+')
        {
            Result = AddRule(Num1, Num2);
        }
        else if (Operator == '-')
        {
            Result = SubtractRule(Num1, Num2);
        }
        else if (Operator == '*')
        {
            Result = MultiplyRule(Num1, Num2);
        }
        else if (Operator == '/')
        {
            if (Num2 != 0)
            {
                Result = DivideRule(Num1, Num2);
            }
        }
        else
        {
            cout << "You Choose Wrong Operator ?";
        }

        cout << "\nResult Is : " << Num1 << " " << Operator << " " << Num2 << " = " << Result;

        cout << endl
             << "\nDo You Want Exit Calculator > Choose ( Q / q ) and Press Enter : ";
        cin >> Operator;

        if (Operator == 'Q' || Operator == 'q')
        {
            RunCalculator = false;
  
            cout << "\n- Calculator Off -\n\n";
        }
    }

    return 0;
}