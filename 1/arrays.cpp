#include <iostream>
// Program performing some basic functionalities of array
using namespace std;

void printArray(int arr[], int size)
{
    cout << " Printing the arrya " << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << " Printing array done " << endl;
}

int main()
{
    int number[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << number[0];
    cout << endl;

    int arryas[15] = {3, 4, 5};
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        cout << arryas[i] << endl;
    }
    printArray(arryas, 15);
    int arrsize = sizeof(arryas) / sizeof(int);
    cout << arrsize << endl;
// -------------------------------------------------------------------
    char ch[5] = {'a', 'v', 'l', 'p', '4'};
    cout << ch << endl;
    cout << ch[2] << endl;

     for (int i = 0; i <= 5; i++)
    {
        cout << ch[i] << endl;
    }

//---------------------------------------------------------------------

// other datatypes arrays
    double float dofloval[8]; 
    float floval[9];
    bool bolval[10];

    return 0;
}