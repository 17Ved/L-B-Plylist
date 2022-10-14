#include <iostream>

using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;   // for the first element of array
    int end = n - 1; // for the last element of array

    while (start <= end)
    {
        // we've to swap the start element and end element, so we'll use predefined swap(a, b) function
        swap(arr[start], arr[end]); 
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{ // for printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15}; // even lenght sized array

    int brr[5] = {2, 6, 3, 4, 9}; // odd length sized array

    reverse(arr, 6);
    reverse(brr, 5);

    cout << " Reversed 6 sized length array " << endl;
    printArray(arr, 6);
    cout << " Reversed 5 sized length array " << endl;
    printArray(brr, 5);
    return 0;
}