// You are given an array/list ARR consisting of N integers. Your task is to find all the distinch triplets present in
// the array which adds up to a given number k.
// An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i , j, and k
// such that i != j, j != k and i != j and ARR[i] + ARR[j] + ARR[k] = 'K'.

#include <iostream>

using namespace std;

int tripletsum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    // return 1;
                    vector<int> temp; // using vector
                    temp.push_back(arr[i], arr[j], arr[k]);
                    temp.push_back(arr[i], arr[j], arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main()
{
    int arr[6] = {5, 4, 3, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << tripletsum(arr, n);
    return 0;
}