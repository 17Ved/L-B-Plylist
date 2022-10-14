#include <iostream>
using namespace std;
// // int main()
// // {
// //     // Printing the size of an array using sizeof() operator function -->
// //     int arr[8] = {11,12,14,45,65,78,98,90};

// //     int size = sizeof(arr) / sizeof(arr[0]);
// //         cout << "\n size of array is " << size;

// //     // Now printing indexes of all array elements
//     for (int i=0;i<size;i++)
//     {
//         cout << "\n arr[" << i << "]"  "=" << arr[i] ;
//         cout << endl;
//     }
// }


int main(){

    int arr[] = {23,45,64,78,96,23};

    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "The size of Array is \t" << length;
    cout << endl;

    for(int i = 0; i < length; i++)
    {
        cout << " Index of element [" << arr[i] << "] is \t" << i;
        cout << endl;
    } 
}