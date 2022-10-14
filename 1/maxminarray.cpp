#include <iostream>

using namespace std;

int getmax(int num[], int n)
{
    // int maxi = INT32_MIN;
    int max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
    // we can also use the perdefined function for max value
    // maxi = max(maxi, num[i]);
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    // returning max value
    return max;
    // return maxi;
}
int getmin(int num[], int n)
{
    // int mini = INT32_MAX;
    int min = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
    // we can also use the perdefined function for min value

    // int mini = min(mini, num[i]);
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    // returning max value
    // return mini;

    return min;
}
int main()
{

    int size;
    cin >> size;

    // int num[size];  // writing line like this and taking array input like this is not a good practice
    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << " Maximum value is " << getmax(num, size) << endl;
    cout << " Minimum value is " << getmin(num, size) << endl;

    return 0;
}