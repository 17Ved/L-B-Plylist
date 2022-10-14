// Following is the code for implementation of switch case to make calculator.

#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cout << " Enter 1st value " << endl;
    cin >> a;

    cout << " Enter 2nd value " << endl;
    cin >> b;

    char op;
    cout << " Enter Operation you want to perform " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << " Your final value is " << a + b << endl;
        break;
    case '-':
        cout << " Your final value is " << a - b << endl;
        break;
    case '*':
        cout << " Your final value is " << a * b << endl;
        break;
    case '/':
        cout << " Your final value is " << a / b << endl;
        break;
    case '%':
        cout << " Your final value is " << a % b << endl;
        break;
    default:
        cout << " Please enter valid operation value " << endl;
    }
    return 0;
}