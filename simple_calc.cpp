#include <iostream>
#include <cassert>
#include <limits>
using namespace std;

int add(int a, int b)

{

    return a + b;
}

int substract(int a, int b)
{

    return a - b;
}

int multiply(int a, int b)
{

    return a * b;
}

int divide(int a, int b)
{
    assert(b != 0);
    return static_cast<double>(a) / b;
}

double menu()
{
    double a, b;
    char operation;
    cout << "Enter the numbers and the operation <a> <operation> <b>";
    cin >> a >> operation >> b;

    // cout << operation;
    switch (operation)
    {
    case '+':
        return add(a, b);
    case '/':
        return divide(a, b);
    case '*':
        return multiply(a, b);
    case '-':
    default:
        cout << "Operation is not valid";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return menu();
    }
}

int main()
{
    // double a, b;

    // a = 5;
    // b = 1;

    double result = menu();

    cout << result;
    return 0;
}