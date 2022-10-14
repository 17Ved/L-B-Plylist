// program to print sum of elements of given array

#include <iostream>

using namespace std;

int sumofarray(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
        return sum;
  
}

int main()
{

    int size;
    cout << " Please enter the no. of elements you want to sum" << endl;
    cin >> size;
    cout << " Now enter the elements " << endl;
    int num[100];
    
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Sum of given array is " << sumofarray(num, size) << endl;


    return 0;
}