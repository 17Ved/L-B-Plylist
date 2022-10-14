#include <iostream>
using namespace std;


// Function where we are arranging elements of an array, where negative no. will be at start and positive at the end.
void reArrange(int arr[], int n)
{

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

// Printing array where all negative elements will be before positive elements
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << " " << arr[i];
        cout << endl;
    }
}
int main()
{

    int arr[] = {-5, -9, -1, 9, 3,-8, -10, 7, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reArrange(arr, n);
    printArray(arr, n);

    return 0;
}