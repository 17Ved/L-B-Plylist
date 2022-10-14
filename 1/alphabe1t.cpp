#include <iostream>
#include <string>

using namespace std;

int main()
{

    // int a;
    // a = cin.get();          // will return the ASCII value of entered input value
    // cout<<"The value of a is"<<a<<endl;
    int n;
    cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << endl;
    //     i = i + 1;
    // }

    // sum of n numbers
    // int sum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1; // i++
    // }
    // cout << "Value of sum is" << sum << endl;

    // program to print sum of all n even numbers
    int sum = 0;
    int i = 2;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2; // i++
    }
    cout << "Value of sum is" << sum << endl;
    return 0;
}