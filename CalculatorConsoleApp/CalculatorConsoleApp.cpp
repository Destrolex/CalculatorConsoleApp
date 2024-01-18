#include "Calculator.h"
#include <iostream>

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double res = 0.0;
    char oper = '+';

    cout << "Calculator" << endl << endl;
    cout << "Enter the command to calculate. Format: a+b | a-b | a*b | a/b | a^b | a%b" << endl;
    cout << "^ - to calculate degree; % - to calculate percent" << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Attemted, divide by zero!" << endl;
            continue;
        }
        else
        {
            res = c.Calculate(x, oper, y);
        }
        cout << x << oper << y << " = " << res << endl;
    }

    return 0;
}