// prob statement - You have been given an integer array/list(ARR) of size 'N'.
// It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// #include <iostream>

// using namespace std;

// // below program is for only sort 0s and 1s ----
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void sortOne(int arr[], int n)
// {
//     int i = 0, j = n - 1;
//     int step = 0;
//     while (i < j)
//     {
//         cout << "Step " << step++ << endl;
//         printArray(arr, n);
//         cout << endl;
//         while (arr[i] == 0 && i < j)    // && i < j is to make sure that, the left side of our array should be greater than right side of array.
//         {
//             i++;
//         }
//         while (arr[j] == 1 && i < j)
//         {
//             j--;
//         }
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

// int main()
// {
//     int arr[10] = {1, 1, 0, 2, 0, 0, 1, 0, 2, 1};

//     sortOne(arr, 10);
//     cout << " Your sorted array is - " << endl;
//     printArray(arr, 10);
//     return 0;
// }

//----------------------------------------------------------------------------------------------------

// program to sort 0s ,1s and 2s -----

#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int size)
{
    int lo = 0;
    int hi = size - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (arr[mid])
        {

        // If the element is 0
        case 0:
            swap(arr[lo++], arr[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);
    cout << " Sorted array is -- " << endl;
    printArray(arr, n);

    return 0;
}
