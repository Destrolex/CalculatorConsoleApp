#include "Calculator.h"
#include "cmath" //вычисление степеней

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '^':
        return pow(x, y);
    case '%':
        return x * y / 100;
    default:
        return 0.0;
    }
}
