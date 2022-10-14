// You are given an array of size 'N' containing each number between 1 to N-1
// at least once. There is a single value that is present in the array twice.
// Your task is to find the duplicate integer value present in the array.

#include <iostream>

using namespace std;

int findduplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i <= n-1; i++)
    {
        ans = ans ^ i;
    }
    return ans;

    // OR ----------------------------------
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]){
                cout << arr[j];
            }
        }

    }
}

int main()
{
    int arr[] = {2, 3, 1, 5, 2, 3, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findduplicate(arr, n);
    return 0;
}