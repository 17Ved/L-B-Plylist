// program to perform linear search

#include <iostream>

using namespace std;

bool searcharr(int arr[], int size, int elemt)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elemt)
        {
            return 1;
        }
    }
        return 0;
}

int main()
{
    // whether 1 is present or not in below array.
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int elemt;
    cout << " Enter the element you want to search " << endl;
    cin >> elemt;

    bool found = searcharr(arr, 10, elemt);

    if (found)
    {
        cout << " Your element is present " << endl;
    }
    else
    {
        cout << " Your element is not present " << endl;
    }

    return 0;
}