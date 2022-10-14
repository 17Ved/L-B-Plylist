// Prob Statement - You are given an integer array 'ARR' of size 'N' and an integer 'S'.
// Your task is to return the list of all pairs of elements such that each sum of elements of each
// pair equals to 'S'.
// Solution is using vector
#include <iostream>

using namespace std;

int pairsum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // sorting final ans
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    int arr[6] = {1, 5, 3, 6, 3, 9};

    return 0;
}