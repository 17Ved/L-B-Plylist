// program to swap two alternate elements of given array

#include <iostream>

using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[6] = {1, 2, 3, 4, 5, 6};
    int odd[5] = {3, 5, 2, 6, 9};

    swapalternate(even, 6);
    printArray(even, 6);
    cout << endl;
    swapalternate(odd, 5);
    printArray(odd, 5);
    return 0;
}