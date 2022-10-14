#include <iostream>

using namespace std;

void update(int arr[], int n)           // on this below code we're updating the actual array i.e. arr[3] = {1,2,3};
{
    cout << " Inside the function" << endl;
    
    // updating array's first element
    arr[0] = {120};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " << endl;
    }

    cout << " Going back to main " << endl;
}

int main()
{

    int arr[3] = {1, 2, 3};
    update(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << endl;
    return 0;
}